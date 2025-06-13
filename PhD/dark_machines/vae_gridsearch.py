from keras.layers import Dense, Input, Conv2D, Conv2DTranspose, Lambda, Flatten, Reshape, MaxPooling2D
from keras.models import Model
from keras.losses import mean_squared_error, binary_crossentropy, kullback_leibler_divergence
from keras.callbacks import EarlyStopping, TerminateOnNaN, ReduceLROnPlateau
from keras import backend as K
import tensorflow as tf
from sklearn.preprocessing import StandardScaler

from sklearn.metrics import make_scorer, accuracy_score
from sklearn.model_selection import GridSearchCV
from keras.wrappers.scikit_learn import KerasClassifier

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import os, scipy
from sklearn.model_selection import train_test_split

from phenom_read_in_data import *

df = single_csv_to_df('Documents/Work/PhD/dark_machines/training_files/chan1/background_chan1_7.79.csv')
df = df.fillna(-999)
variables = [entry for entry in df.columns if entry[0] == 'E'] \
            + [entry for entry in df.columns if entry[0:2] == 'pt'] \
            + [entry for entry in df.columns if entry[0:2] == 'et'] \
            + [entry for entry in df.columns if entry[0:2] == 'ph']

#Now we one_hot encode the data to make sure we have a class definition
df = df[['process_ID']+variables]
one_hot = pd.get_dummies(df['process_ID'])
processes = one_hot.columns
df.drop('process_ID', axis = 'columns', inplace = True)
df = pd.concat([df, one_hot], sort = False, axis = 1)

#We have created a df of our values and some kind of class label
#We should normalize
x = df[variables].values
x_scaled = StandardScaler().fit_transform(x)
df[variables] = x_scaled

x_train, x_test, y_train, y_test = train_test_split(df[variables].values,
                                                    df[processes].values,
                                                    shuffle = True,
                                                    random_state = 42,
                                                    test_size = 0.1)

#Reshape the data. This will have to be done explicitly until you think of a clever way of doing it
x_train = x_train.reshape((x_train.shape[0], 4, 2, 7))
x_test = x_test.reshape((x_test.shape[0], 4, 2, 7))

#VAE Model
original_dim = x_train.shape[0]
input_shape = x_train.shape[1:]
latent_dim = 4
intermediate_dim = 50
kernel_max_norm = 1000.
act_fun = 'relu'
epsilon_std = 1.
filters = 32
kernel_size = (3, 3)
strides = (1, 1)

K.clear_session()


def make_model(optimizer='rmsprop', init='glorot_uniform', filters=filters,
               intermediate_dim=30, act_fun=act_fun, kernel_size=kernel_size,
               strides=strides):
    def sampling(args):
        z_mean, z_log_var = args
        epsilon = tf.random.uniform(shape=(K.shape(z_mean)[0], latent_dim))
        return z_mean + K.exp(z_log_var / 2) * epsilon

    # Define some losses
    def kl_loss(y_true, y_pred):
        kl_loss = 1 + z_var - K.square(z_mean) - K.exp(z_var)
        kl_loss = K.sum(kl_loss, axis=-1)
        kl_loss *= -0.5
        # kl_loss = K.mean(kl_loss)
        return kl_loss

    def recon_loss(y_true, y_pred):
        recon_loss = mean_squared_error(K.flatten(y_true), K.flatten(y_pred))
        recon_loss *= shape[0] * shape[1] * shape[2]
        # recon_loss = K.mean(recon_loss)
        return recon_loss

    def my_vae_loss(y_true, y_pred):
        recon = recon_loss(y_true, y_pred)
        kl = kl_loss(y_true, y_pred)
        vae_loss = recon + kl
        return vae_loss

    # Layers
    x_input = Input(shape=input_shape, name='Input')
    conv_1 = Conv2D(filters=filters,
                    activation=act_fun,
                    kernel_size=kernel_size,
                    strides=strides,
                    padding='same')(x_input)
    pool_1 = MaxPooling2D(pool_size=(1, 1),
                          strides=2,
                          # data_format = 'channels_first'
                          )(conv_1)
    conv_2 = Conv2D(filters=filters,
                    activation=act_fun,
                    kernel_size=kernel_size,
                    strides=strides,
                    padding='same')(pool_1)

    # Shape info needed to inform the dense layer in the decoder
    flatten = Flatten()(conv_2)

    shape = input_shape

    # Encoding
    dense_encoder_1 = Dense(intermediate_dim,
                            activation=act_fun,
                            name='dense_encoder_1')(flatten)
    dense_encoder_2 = Dense(16,
                            activation=act_fun,
                            name='dense_encoder_2')(dense_encoder_1)
    z_mean = Dense(latent_dim, name='z_mean')(dense_encoder_2)
    z_var = Dense(latent_dim, name='z_var')(dense_encoder_2)

    z = Lambda(sampling, output_shape=(latent_dim,), name='sampling')([z_mean, z_var])

    encoder = Model(x_input, [z_mean, z_var, z], name='encoder')
    encoder.summary()

    # Decoding
    decoder_input = Input(shape=(latent_dim,), name='decoder_input')
    dense_decoder_1 = Dense(shape[0] * shape[1] * shape[2],
                            activation=act_fun, name='dense_decoder_1')(decoder_input)
    reshape = Reshape((shape[0], shape[1], shape[2]))(dense_decoder_1)

    deconv_1 = Conv2DTranspose(filters=filters,
                               kernel_size=kernel_size,
                               activation=act_fun,
                               strides=strides,
                               padding='same',
                               name='deconv_1')(reshape)
    deconv_2 = Conv2DTranspose(filters=16,
                               kernel_size=kernel_size,
                               activation=act_fun,
                               strides=strides,
                               padding='same',
                               name='deconv_2')(deconv_1)

    output = Conv2DTranspose(filters=7,
                             kernel_size=kernel_size,
                             activation='sigmoid',
                             padding='same',
                             strides=strides,
                             name='decoder_output')(deconv_2)

    decoder = Model(decoder_input, output, name='decoder')
    decoder.summary()

    # Build the VAE model
    outputs = decoder(encoder(x_input)[2])
    vae = Model(x_input, outputs, name='vae')

    vae.compile(optimizer='rmsprop', loss=my_vae_loss, metrics=[kl_loss, recon_loss])
    vae.summary()

    return vae

#Fit the model
epochs = 10
batch_size = 1000

parameters = {
             'intermediate_dim' : [10, 20, 30, 40, 50, 60, 70, 80, 90, 100],
             'act_fun' : ['relu', 'softmax', 'sigmoid'],
             'filters' : [16, 32, 64, 128, 256],
             'kernel_size' : [(1,1), (2,2), (3,3)],
             'strides' : [(1,1), (2,2), (3,3)]
             }

vae = make_model()
#vae = KerasClassifier(build_fn=make_model, epochs = epochs, batch_size = batch_size)
#acc_scorer = make_scorer(accuracy_score)
#grid_obj = GridSearchCV(estimator=vae, param_grid=parameters, scoring=acc_scorer)
#grid_obj = grid_obj.fit(x_train, x_train)

#Set the clf to the best combination of parameters
#vae = grid_obj.best_estimator_

history = vae.fit(x = x_train,
                  y = x_train,
                  validation_data = (x_train, x_train),
                  epochs = epochs,
                  batch_size = batch_size,
                  verbose = 2)

vae.save('cnn-vae_model.h5')