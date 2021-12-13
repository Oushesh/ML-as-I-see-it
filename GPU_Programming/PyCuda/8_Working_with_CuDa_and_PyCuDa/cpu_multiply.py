import numpy as np
from timeit import default_timer as timer

#CPU Function to multiply 2 array elements and also update the results on the
#second array.

def multiply(p_cpu,q_cpu):
    for i in range(N):
        q_cpu[i]= p_cpu[i]*q_cpu[i]
    return q_cpu

def main(p,q):
    #Time the CPU function
    begin = timer()
    multiply(p,q)

    numpy_cpu_time = timer()-begin
    #Report CPU computation time

    print ("CPU function took %f seconds."%numpy_cpu_time)

    #Choose a random integar index value between 0 and N
    random = np.raondom.randint(0,N)
    #Verify all vluaes to be 276.0
    print("New value of second array element with random index", random, "is", q[random])

if __name__ == "__main__":
    N = 500000000 #500 million elements
    #Initialize the 2 arrays of double data type all with 0.0 values upto N
    p_cpu = np.zeros(N,dtype=np.double)
    q_cpu = np.zeros(N,dtype=np.double)
    #Update all the alements in 2 arrays with 23.0 and 12.0 respctively

    p_cpu.fill(23.0)
    q_cpu.fill(12.0)
    main(p_cpu,q_cpu)
