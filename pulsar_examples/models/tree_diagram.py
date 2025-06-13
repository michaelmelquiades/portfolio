import pydotplus
from sklearn.tree import export_graphviz
from sklearn.externals.six import StringIO

def tree_diagram(classifier, features):
    dot_data=StringIO()

    export_graphviz(classifier, out_file=dot_data, filled=True,
                rounded=True, 
                special_characters=True, 
                feature_names=features, 
                class_names=['0','1'])

    graph=pydotplus.graph_from_dot_data(dot_data.getvalue())
    graph.write_pdf('pulsar_tree.pdf')
