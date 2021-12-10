## Situation

   * For a Machine Learning Video Project I had to quickly build a PoC and put
     into test and later into production a 2D to 3D movie Converter.
     ffmpeg was an important tool for processing videos into images

     For heavy streaming puporses one would ultimately in the end
     use GPU accelerated ffmpeg computing.

## Wrapper
    The idea is to build a normal wrapper around the ffmpeg executable rather
    than going through the code of ffmpeg and implement it from scratch.

## Why this way?
   The idea was to use the Python subprocess modeule to build a command line wrapper. Really useful. It implements a Pythonic
   interface for FFmpeg command line compilation and uses Python "subprocess"
   module to execute compiled command line.

## More to come now.

## Gitclone: https://github.com/Ch00k/ffmpy
