'''
Sample Logistic regresion problem with scikit
We are going to automate it with mlflow
'''
import sklearn
from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression

dataset = datasets.load_iris() #load a custom dummy dataset just for testing.
X_train, X_test,y_train,y_test = train_test_split(dataset.data,dataset.target,test_size=0.4)

clf = LogisticRegression()
clf.fit(X_train, y_train)

## now we add flavours of mlflow
import mlflow
from sklearn.linear_model import LogisticRegression
mlflow.sklearn.autolog() #what you autolog will be displayed on the MLFlow Visualisation UI

with mlflow.start_run():
    clf = LogisticRegression()
    clf.fit(X_train,y_train)

'''
Above, the mlflow.sklearn.autolog() instruction enbalbes you to automatically log the
experiment in the local directory.
'''
