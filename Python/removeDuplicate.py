def duplicate(n,arr):
    i = 0
    for j in range(1,n):
        if(arr[i] !=arr[j]):
           i +=1
           arr[i] = arr[j]
    return i

n = int(input())
arr = list(map(int,input().split()))
ans = duplicate(n,arr)
for i in range (0,ans+1,1):
    print(arr[i],end = " ")
