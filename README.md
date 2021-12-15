<<<<<<< HEAD
## Why for me?
  As mentioned by Einstein, physics is about explaining the day-to-day observation and phenomeon.
  Analogically Engineering is about optimising day to day practices such that life works at "click of a button".

  A Computer Vision and Deep Learning Engineer day to day life involve a lot of protoyping, training
  neural networks, building PoCs, MVPs and putting features into production as in my case.


  To maintain the same level of enthusiasm: one needs to automate things that are mundane and leave more
  time for the exciting things which the reason of this git.

  It is basically ML-as-I-see it based on the naming of Einstein's book 'The World as I see it'

## Why for Companies?
    An AI Company has to be able to move fast through thousands of product iterations fast.

    The aim in Machine Learning is pipeline perfection and automation to unlift the repetitive mundane tasks so that the Data Scientists and Deep Learning Engineers can focus on the creative jobs of R&D.

    However from my own experience as a Deep Learning Engineer and Data Scientist:

    one often underestimate the importance of GPU data preprocessing and often because the training is done anyway on massive GPUs either single or multi GPUS (high-end ones like: A100 or V100) *

    1. However often there is huge bottleneck in CPU-GPU data transfer.

    2. Secondly, as you may know, one has the choice to perform online or offline Data Augmentation using some awesome libraries like: Albumentations or Facebook Augly.
    However doing those transformations online after loading the data from SSD to CPU and performing those operations is costly and hurt the overall pipeline.

    Instead its better to perform those operations directly on GPU.
