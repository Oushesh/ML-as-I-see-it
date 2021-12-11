## How to rewrite a code on CPU for GPU?
     minimal changes:
   * Step 1:
     Understanding threads and Blocks

     Variables needed:
      * threadIdx.x: thread index within the block

      * blockIdx.x: block index within the grid

      * blockDim.x: dimension of the block

   Index calculation is done as following:

    * index = threadIdx.x + blockIdx.x.*blockDim.x;


    
