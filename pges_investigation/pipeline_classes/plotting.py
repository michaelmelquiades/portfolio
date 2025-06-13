######################################################################################################################################
"""
This class handles the plotting of features or elements of data produced by other classes in the project. Plotly is used to plot.
Function arguments will be described using nomenclature: 
- <variable_name> (<variable type>): <variable description>
==============
Initialisation
==============
plotting(df)
- df (DataFrame): dataframe containing variables to be plotted

=======
Methods
=======
Name: style_fig(fig, title, xlabel, ylabel, title_size, tick_size)
Description: handles the styling of the figure i.e. the naming and design of axes' labels, the position of descriptive text, etc
Arguments:
- fig (plotly.graph_objects.Figure): the figure to be styled
- title (string): title of the figure
- xlabel (string): x-axis label/title
- ylabel (string): y-axis label/title
- title_size (int): font size for the titles/labels
- tick_size (int): size of the x and y axis ticks
Returns: plotly.graph_objects.Figure

Name: make_line_fig(y, x, color, markers, save, save_path, title, xlabel, ylabel, title_size, tick_size)
Description: makes a line figure based on given data
Arguments:
- y (array-like): data that is to be plotted on the y axis
- x (array-like): data that is to be plotted on the x axis
- color (string): color of the line to be plotted
- markers (bool): indicate whether markers should be added to the line or not showing the data points
- show (bool): indicate whether to print the image to the terminal
- save_path (string): save path of the image (without the file extension)
- title (string): title of the figure
- xlabel (string): x-axis label/title
- ylabel (string): y-axis label/title
- title_size (int): font size for the titles/labels
- tick_size (int): size of the x and y axis ticks
Returns: plotly.graph_objects.Figure

Name: make_violin_fig(y, x, color, box, points, show, save_path, title, xlabel, ylabel, title_size, tick_size)
Description: makes a violin figure based on given data
Arguments:
- y (array-like): data that is to be plotted on the y axis
- x (array-like): data that is to be plotted on the x axis
- color (string): color of the violin to be plotted
- box (bool): indicate whether the box plot should be plotted in the violin
- points (string): control the plotting of the pints on the image that are used to make the plot
- show (bool): indicate whether to print the image to the terminal
- save_path (string): save path of the image (without the file extension)
- title (string): title of the figure
- xlabel (string): x-axis label/title
- ylabel (string): y-axis label/title
- title_size (int): font size for the titles/labels
- tick_size (int): size of the x and y axis ticks
Returns: plotly.graph_objects.Figure

Name: figures_to_html(figs, fname)
Description: plots multiple figures on in the same html file such that they can be scanned through quickly
Arguments:
- figs (array-like): list of plotly.graph_objects.Figure instances to be put into one html plot
- fname (string): the file path to save the html plot to
Returns: None

Name: plot_features(df, show_fig, fname)
Description: plots the features of a given dataframe and saves to an html file
Arguments:
- df (DataFrame): dataframe containing variables to be plotted
- show_fig (bool): indicate whether to print the image to the terminal
- fname (string): the file path to save the html plot to
Returns: list (of plotly.graph_objects.Figure instances)
"""
######################################################################################################################################

import pandas as pd
import plotly.express as px
import plotly.graph_objects as go

class plotting:
    def __init__(self, df):
        self.df = df
    
    def style_fig(self, fig, title, xlabel, ylabel, title_size, tick_size):
        fig.update_layout(title = dict(text = title,
                               y = 0.95, 
                               x = 0.5,
                               xanchor = 'center', 
                               yanchor = 'top'),
                  xaxis = dict(title = xlabel, 
                               tickmode = 'linear', 
                               titlefont_size = title_size, 
                               tickfont_size = tick_size), 
                  yaxis = dict(title = ylabel, 
                               titlefont_size = title_size, 
                               tickfont_size = tick_size), 
                  legend = dict(x = 0.1, y = 0.9))
        return fig
    
    def make_line_fig(self, y, x = None, color = None, 
                     markers = True, show = False, save_path = 'new_feat_fig_line',
                     title = 'Feature Change over Epochs', xlabel = 'Epochs', ylabel = 'Volts', title_size = 16, tick_size = 14):        
        
        if x == None:
            x = list(self.df.index.get_level_values('epoch'))
        if color == None:
            color = list(self.df.index.get_level_values('channel'))
            
        fig = px.line(self.df, x = x, y = y, color = color, markers = markers)
        fig = self.style_fig(fig, title=title, xlabel=xlabel, ylabel=ylabel, title_size=title_size, tick_size=tick_size)
        
        fig.write_html('%s.html'%save_path)
        fig.write_image('%s.png'%save_path)
        
        if show:
            fig.show()
        return fig
                
    def make_violin_fig(self, y, x = None, color = None, box = True, points = 'all', 
                        show = False, save_path = 'new_feat_fig_violin',
                        title = 'Feature Distribution', xlabel = 'Trial', ylabel = 'Volts', title_size = 16, tick_size = 14):
        if x == None:
            x = 'type'
        if color == None:
            color = list(self.df.index.get_level_values('channel'))
        
        fig = px.violin(self.df, x = x, y = y, color = color, box = box, points=points)
        fig = self.style_fig(fig, title=title, xlabel=xlabel, ylabel=ylabel, title_size=title_size, tick_size=tick_size)
        
        fig.write_html('%s.html'%save_path)
        fig.write_image('%s.png'%save_path)
        
        if show:
            fig.show()
        return fig
    
    def figures_to_html(self, figs, fname = 'dashboard.html'):
        with open(fname, 'w') as dashboard:
            dashboard.write("<html><head></head><body>" + "\n")
            for fig in figs:
                inner_html = fig.to_html().split('<body>')[1].split('</body>')[0]
                dashboard.write(inner_html)
            dashboard.write("</body></html>" + "\n")
    
    def plot_features(self, df = None, show_fig = False, fname = 'test.html'):
        if type(df)==type(None):
            df_ = self.df.copy()
        else:
            df_ = df.copy()
        df_.pges[df_.pges == 0] = 'Background'
        df_.pges[df_.pges == 1] = 'PGES'
        figs_dict = {}
        c = 1
        if df_.columns[0] == 'epoch':
            cols = df_.columns[2:-2]
        else:
            cols = df_.columns[:-2]
        for i in cols:
            try:
                fig = px.box(df_, x=df_.index.get_level_values("channel"), y=[i], color="pges")
            except:
                fig = px.box(df_, x=df_.channel, y=[i], color="pges")
            fig.update_traces(quartilemethod="exclusive")

            if 'psd' in i:
                if 'rel' in i:
                    fig.update_yaxes(title_text = i+' (Arbitrary Units)')
                else:
                    fig.update_yaxes(title_text = i+' (dB)')
            else:
                fig.update_yaxes(title_text = i+' (Volts)')
    
            figs_dict[str(c)] = fig
            c+= 1
            if show_fig:
                fig.show()


        figs_list = [figs_dict[fig] for fig in figs_dict.keys()]
        self.figures_to_html(figs_list, fname = fname)
        
        return figs_list