'''
There are situations in life
when Pytorch does not release
the GPU memory directly. For instance:
if you reneed to free memory to perform
inference afterwards.
There are several ways to do this like I
mentionned before: like killing process
or splitting the function in different
functions
'''

## In a nutself: garbage collection is used for circular reference.

import ctypes
import gc

def ref_count(address):
