import numpy as np
import time


def Check_Sort(arr):
    n= 1e6
    i = 0
    while (i < n - 1 and arr[i] <= arr[i + 1]):
        i=i+1
    return i == n - 1



for i in  range (1,11):
    filename = 'data_' + str(i) +'.txt'
    with open(filename, 'r') as f:
        data = f.readlines()

        for line in data:
            # data = [float(line.strip()) for line in f]
            data = [float (x) for x in line.split()]
            # print (data)
            
  
            start_time = time.time()
            array= np.sort(data)
            end_time = time.time()

            time_elapsed = (end_time - start_time) * 1000  # Chuyển đổi sang mili giây

            print(f"Execution time Numpy Sort [{i}]: {time_elapsed} ms")
            print (Check_Sort(array))
            