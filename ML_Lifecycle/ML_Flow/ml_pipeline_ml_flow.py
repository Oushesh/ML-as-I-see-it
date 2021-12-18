import numpy as np
import pandas as pd
import mlflow
import mlflow.sklearn
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score

from sklearn.metrics import confusion_matrix

if __name__ == "__main__":
    mlflow.set_experiment(experiment_name="mlflow demo")

    training_data = pd.read_csv("dummy.csv")
    print ("Loaded training data!")

    training_data.describe()
    x = training_data.iloc[:,:-1].values
    y = training_data.iloc[:,-1].values

    X_train,X_text, y_train,y_test = train_test_split(X,y,train_test_split)
    sc = StandardScaler()
    X_train = sc.fit_transform(X_train)
    X_test = sc.transform(X_test)

    classifier = KNeighborsClassifier(n_neighbors=5,metric=...)

    #model training
    classifier.fit(X_train,y_train)
    print ("Model trained")

    y_pred = classifier.predict(X_test)
    y_prob = classifier.predict_proba(X_test)[:,1]

    cm = confusion_matrix(y_test,y_pred)

    print (model_accuracy)

    mlflow.log_metric("aacuracy", model_accuracy)
    mlflow.sklearn.log_model(classifier,"model")
