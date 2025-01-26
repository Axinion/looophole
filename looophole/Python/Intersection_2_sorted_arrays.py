from os import *
from sys import *
from collections import *
from math import *

def findArrayIntersection(arr: list, n: int, brr: list, m: int):
    res = []
    i,j = 0,0
    while(i<n and j<m):
        if(arr[i]==brr[j]):
            res.append(arr[i])
            i+=1
            j+=1
        elif(arr[i]<brr[j]):
            i+=1
        else:
            j+=1
    return res
