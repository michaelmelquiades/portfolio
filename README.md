# Portfolio
This repository is a collection of code that aims to showcase some of what I am able to do. This is by no means an exhaustive list as some code is under NDA or is a specific piece of IP. Some of these include API calls to cloud services (GCS, AWS, Arduino Cloud etc), using LLM agents, and building dashboards with docker containers. Only the data that is not protected by NDA or IP is used. </br>
This will continually be added to, so watch this space! </br>

## Description
### PhD
Various code examples I used during the PhD.
- **dark_machines**: details the testing of CNN-VAEs for the classification of signal from background in dark matter data. Contains beta-VAE, as well as code to assess performance and read in the data we used for the project. 
- **dijet_resonance_algorithm_comparison**: a comparison of AI methods to determine the best method for analysing dark matter jets. This "best method" looked at a number of things: which algorithm best differentiated between signal, background and different signal models, whether a Bayesian method (Naive Bayes) could outperform the usual frequentist method baseline (BDT), and whether using the probability distribution of the best method (ANN) could be a viable option for defining data control regions for use in future dark matter analysis.
- **jet_energy_calibration**: scripts to perform some calibration of dark matter jets. The aim here was to understand how close to the true data the Monte Carlo data was.
- **jpg_to_mnist**: converts images to an MNIST form.
- **semi_visible_jets**: analysing semi-visible jets and the constituents of them. Most of this was a jet matching algorithm, aiming to match reconstructed data to truth data.
- **tree_making_ROOT**: data that made ROOT (C++ style code at CERN) trees, a data format similar to h5.

### aquanzo_investigation
Notebooks that were used to optimise the growth of Artemia (brine shrimp) for Aquanzo.These ranged from feed component analysis to looking at the best ML methods to separate good from bad growth (good defined as anything above a 20% decrease in weight)

### banana_AI
A personal side-project where I have collected images of bananas in various stages of ripeness to make an AI that could tell whether a banana is ripe, underripe or overripe. I am colourblind, so something like this would be very helpful! Unfortunately, I do not have enough data yet to fix the overtraining problem, but I am getting there!

### image_generation
Personal version of a stable-diffusion-like model that can produce images from text inputs. The weights and biases were downloaded from huggingface and run on a 2060 GPU in my home PC. I tend to use it to make goofy images, or to help quickly produce images for DnD campaigns.

### nirs_calibration
This was a project I had to fix prediction drift in a model using Near Infra-Red Spectroscopy on cattle feed. I found that the model was not the problem, but the data itself was the issue. When I reported this, I questioned whether they had calibrated the machine recently. Turns out they hadn't in something like 10 years. After doing so, they found much better results overall.

### pges_investigation
Code that I used during my work with King's College London in order to understand Post-ictal Generalised EEG Suppression in epilepsy patients. 
