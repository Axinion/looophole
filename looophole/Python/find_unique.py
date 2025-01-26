import sys

def findUnique(arr, n) :
    i,ans=0,0;
    while i<n:
        ans = ans ^ arr[i]
        i+=1 
    return ans