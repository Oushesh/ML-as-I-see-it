'''
This code is an example of Kernel
Reduction in PyCUDA

This is an example where one
does a matrix operation using
Reduction.
'''
import pycuda.gpuarray as gpuarray
import pycuda.autoinit
import numpy
from pycuda.reduction import ReductionKernel


vector_length = 400

input_vector_a = gpuarray.arrange(vector_length,dtype=numpy.int)
input_vector_b = gpuarray.arrange(vector_length,dtype=numpy.int)

'''
The reduction Kernel is a key aspect to alleviate
'''
dot_product = ReductionKernel(numpy.int,arguments="int *x, int *y",map_expr="x[i]*y[i]",reduce_expr = "a+b",neutral="0")

dot_product = dot_product(input_vector_a,input_vector_b).get()

print ("INPUT VECTOR A:",input_vector_a)
print ("INPUT VECTOR B:",input_vector_b)
print ("INPUT VECTOR A*B:",dot_product)
