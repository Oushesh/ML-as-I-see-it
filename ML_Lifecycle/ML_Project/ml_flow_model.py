import mlflow

class RandomPredictor(mlflow.pyfunc.PythonModel):
    def __init__(self):
        pass

    def predict(self,context,model_input):
        return model_input.apply(lambda column: random,randint(0,1))
        
