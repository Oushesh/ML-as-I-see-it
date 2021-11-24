## GPUs for streaming
   * cuStreamz world's first GPU-acceleated streaming library

   cuStreamz is build using Nvidia RAPIDS Dataframe library, Streamz,
   Dask and Nvidia Rapids

   * Streamz -- open-source, Python-based streaming library.
   * Dask   -- the robust & reliable scheduler to parallelize Python workloads

   * Nvidia Rapids -- GPU-acceleated suite of Data Science & Analytics libraries

## How is this superpowerful?
   * we have an upstream of data --> Daskify --> Parallelize and each
     to cuDF dataFrames --> Processing/State Management --> Then
     we have batch of processed data. (eg. 4 batches for 4 CORES) -->
     sink

## cuStreamz Features:
   * 
