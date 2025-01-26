def findDuplicate(arr):
    ans = 0
    for i in range(0,len(arr)):
        ans = ans ^ arr[i]
        i+=1
    for j in range(1,len(arr)):
        ans = ans ^ j
        j+=1
    return ans