# cook your dish here
arr = []
n = int(input())
for i in range(0,n):
    a = int(input())
    arr.append(a)
    i+=1
    
for i in range(0,n-1,2):
    arr[i], arr[i+1] = arr[i+1], arr[i]

for i in range(0,n):
    print(arr[i])