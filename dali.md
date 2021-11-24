## Why?
   In most of the machine learning pipelines we/I read in images
   with various styles and python tools whether from folders or
   individual images.

   We also use various libraries and perform various tasks like OpenCV,
   Pillow, PIL or Librosa.
   PS: OpenCV is more efficient at handling an opening over directories
   with large number of images than the users since its core implementation is based on Gstreamer.

## The tasks before the data is actually on the GPU?
   This is called preprocessing and the pipeline should
   ideally be made in a way to handle all this under
   a module called preprocessor.

   * Read folder of images. GPU decoding of images
   * Maybe resize
   * Augmentations (several type: albumentations for instance:)

## Afterwards we have Inferencing on GPU anyways

## Finally we have presenting the output (postprocessing)
   * Usually we would convert the data to cpu using the .cpu() the show
     the output

## Reads: https://developer.nvidia.com/blog/nvidia-ffmpeg-transcoding-guide/

  https://medium.com/@datamonsters/preprocessing-on-the-fly-with-nvidia-dali-285c05d05d3d
