## Why ML Flow?
   Consider the scenario you are an R&D Deep Learning Engineer
   and performing lots of experiments to add new product
   feature or improve existing ones. You have new model from
   a new experiment setup to communicate during the 14 day
   sprint or stand-up and want to make that model
   tested or reproduced.

   1. Now you have to communicate about the dependencies and experiment setup to the other person. You could put it on
   git and make a .yml file or requirements.txt file. However
   when you need more and more libraries or different model
   type flavours: like pytorch or tensorflow this becomes a hassle. In the past: one had 2 choices build a massive separate testing environment for each or

   One could use onnx (model description .py file and .pb or .pth file) to get the intermediate representation then pass to the desired folder.

   2. Just use MLFlow. The new scenario becomes I pass the ML Flow model and MLFlow environment. More cool stuffs: you can
   also track the experiment using the Visualisation.

## What happens if I dont use it?

## The how of the story.
   #### 1. Visualisation TOOL
   ![classical_pipeline](ML_Flow/ml_flow_classical.png)
   ![ml_flow_pipeine](ML_Flow/ml_pipeline_ml_flow.png)

  Let's say you have a code for training independent of the flavours: Pytorch, Tensorflow,
  SKLEARN.

  You can simply follow the following steps to use the "ML Flow" flavour on top of your
  code:

  1. To start with: ML Flow is a good flow on top of Training Frameworks like Pytorch, Tensorflow, SKLEARN, etc...

  ![import_ml](ML_Flow/import.png)

  2. Next is to setup mlflow experiment with a name: "mlflow demo" for instance

  ![import_ml](ML_Flow/experiment_setup.png)

  3. We are going to later use the name to call the MLFlow UI Api to display the results of the training task.

  4. We need to add the log to visualise the results afterwards using the local IP.
  ![visualiasation_tool](ML_Flow/visualisation_ip.png)

  5. The results of the visualisation and the task:
  ![visualisation_ip](ML_flow/mlflow_visualisation_tool_API.png)

  #### 2. Reproducibility
       In the context of an AI-First Company and Machine Learning in General:
       Reproducibility is a key aspect which is why ML Flow "mlruns" comes into play.
       See the structure below:

  ![Directory_ML_OPS](ML_Flow/directory_definition.png)

  Logistic regression.py or any code "trainer.py"

  #### 3. 
