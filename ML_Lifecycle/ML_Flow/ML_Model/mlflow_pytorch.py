'''
ml_flow_model
'''
import torch
import mlflow.pytorch

#class defined here

class LinearNNModel(torch.nn.Module):
	'''
	#initialize our model, criterion and optimiser
	'''
	#Training Loop

#Log the model
with mlflow.start_run() as run:
	mlflow.pytorch.log_model(model,"model")


#Inference after loading the logged model
model_uri = "runs:/{}/model".format(run.info.run_id)
loaded_model = mlflow.pytorch.load_model(model_uri)
for x in [4.0,6.0,30.0]:
	x  = torch.Tensor([x])
	y_pred = loaded_model(x)
	print("predict X: {}, y_pred: {:.2f}".format(x, y_pred.data.item()))


'''
Example of Mlflow how my colleagues
would read in the models when I share
it with them.
'''

import torch
import mlflow
import mlflow.pytorch

#set values
model_path_dir = "..."
#Folder name of serialised model after: mlrun was performed.

run_id = "d2c7fbe71be4443aa20b33a2e26f4a17"
pytorch_model = ""
