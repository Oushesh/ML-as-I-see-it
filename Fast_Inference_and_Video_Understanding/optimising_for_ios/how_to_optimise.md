#### This good read serves a principle how to optimise model specially the pytorch format for deployment on the edge or mobile devices.

###### There are several tools out there:
    1. TensorRT mostly suited for on the edge devices.  

    2. For mobile devices ios: we content with torch scrpt:
       Input: .pt pretrained model
              .py model definition script

      Now there are 2 ways that torchscript allows one
      to optimise models:
        1. The trace method:
           The trace method is more convenient and can trace the backpropagation steps further
           down the line with an example input and the exact code that loads the model even with "forward"

        2. The script method:
           Does not require the image input. Nonetheless for it to work one need to add @torch.jit.script decorator
           to each module with forward.

    3. Usually one quantizes the model first and past it to torchscript.

## Reference:
   1. Quantisation Script: https://pytorch.org/tutorials/advanced/static_quantization_tutorial.html
   2. Installation on windows:
      On Linux everything works fine.
      https://github.com/pytorch/pytorch/issues/29327

      https://github.com/pytorch/pytorch/issues/31684

    3. Model Preparation for iOS:
       https://pytorch.org/tutorials/recipes/model_preparation_ios.html

    4. https://pytorch.org/tutorials/beginner/Intro_to_TorchScript_tutorial.html#mixing-scripting-and-tracing
