'''
Based on nvidia dali
examples: https://docs.nvidia.com/deeplearning/dali/user-guide/docs/examples/sequence_processing/video/video_reader_label_example.html
exameple: https://github.com/NVIDIA/DALI/blob/main/docs/examples/sequence_processing/video/video_reader_simple_example.ipynb
'''

'''
Goal: simple video pipeline reading from multiple files
Input: video
output: selected .png or .jpg images
'''

import os
import numpy as np
import shutil
import cv2

import nvidia.dali.fn as fn
import nvidia.dali.types as types


if __name__ == '__main__':
#TODO: https://github.com/NVIDIA/DALI/blob/main/docs/examples/sequence_processing/sequence_reader_simple_example.ipynb
