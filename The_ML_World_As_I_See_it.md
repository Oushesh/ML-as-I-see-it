## The WHy?

## The What needed?

## How to do it?
    1. DATALOADER: Most data are structured and stored in specific folders for specific
   use-cases. From the inception itself to make the pipeline more efficient and
   modular: it makes sense to have a dataloader: location agnostic piece of code.

   ![dataloader](dali/dataloader.png)

    2. preprocessor:
    The work of the preprocessor is to preprocess the data into a form digestible
    to the GPUs.

    * In the my day-to-day case:
    I use images or recently videos.
    Images and videos(series of images)
    These are natively consumed into arrays (numpy arrays or tensors whether pytorch or tensorflow).
    So for these 2 datatypes no separate processes are required for the Neural Network to consume those data.

    However, in the case of limited data storage or because of "beautiful purposes", one might do an online data augmentation or preprocessing once the pipeline is ran on a GPU cluster machine.

    This is where having the preprocessing done directly onto GPU makes things super fast.

  ![dataloader](dali/dali_pipeline.png)

  Here is the dilemma though: It is well know that augmentations in data involve mainly if not only:
  matrix transformations. Each transformation on the original image (matrix data input) is applied.
  Thus, individual transformations could be easily wrtitten using Cupy or with Numba JIT compiler by adding the decorator.
## Does it make sense?


## Reference: https://github.com/aws-samples/sagemaker-cv-preprocessing-training-performance/blob/main/src/sm_augmentation_train-script.py
