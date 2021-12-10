## An AI first company point of view

   * has to be able to move fast through thousands of
   product iterations fast. The aim
   in Machine Learning pipeline perfection and automation is unlift the repetitive mundane tasks so that the Data Scientis and Deep Learning Engineers can focus on the creative jobs of R&D.

   * However from my own experience as
   a DeepLearning Engineer and Data Scientist: one often underestimate
   the importance of GPU data preprocessing and often because the training is done
   anyway on massive GPUs either single or multi GPUS (highend ones like: A100 or V100)
    * However often there is huge bottleneck in CPU-GPU data transfer.
    * Secondly, as you may know, one has the choice to perform online or offline Data Augmentation
      using some awesome libraries like: Alibmentations or Facebook Augly.

      However doing those transformations online after loading the data from SSD to CPU and performing those operations is costly and hurt the overall pipeline

      Instead its better to perform those operations directly on GPU.
      
