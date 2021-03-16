#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'stdDev' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def stdDev(arr):
    # Print your answers to 1 decimal place within this function
    sum = 0
    result = 0
    for i in range(len(arr)):
        sum += arr[i]
    
    mean = sum / len(arr)
    
    for i in range(len(arr)):
        result += (arr[i] - mean) ** 2
        
    variance = result / len(arr)
    std = math.sqrt(variance)
    
    print("{:.1f}".format(std))
        

if __name__ == '__main__':
    n = int(input().strip())

    vals = list(map(int, input().rstrip().split()))

    stdDev(vals)
