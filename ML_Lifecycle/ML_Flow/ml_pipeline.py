'''
This is a simple training pipeline:
to build a classification model using
KNN Clasisifier.
'''

import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import classification_report
from sklearn.metrics import accuracy_score

X_train,X_text, y_train,y_test = train_test_split(X,y,train_test_split)

training_data = pd.read_csv('data.csv')
training_data.describe()

x = training_data.iloc[:,:-1].values
y = training_data.iloc[:,-1].values

sc = StandardScaler()
X_train = sc.fit_transform(X_train)
X_test = sc.transform(X_test)

classifier = KNeighborsClassifier(n_neighbors=5,metric=...)

classifier.fit(X_train,y_train)

y_pred = classifier.predict(X_test)
y_prob = classifier.predict_proba(X_test)[:,1]

cm = confusion_matrix(y_text,y_pred)

print (accuracy_score(y_test,y_pred))
