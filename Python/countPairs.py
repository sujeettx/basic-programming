def countPairs(n,arr,k):
    count = 0
    for i in range (n):
        for j in range(i+1,n,1):
            if arr[i]+arr[j] == k:
                count+=1
    return count

n = int(input())
k = int(input())
arr = list(map(int,input().split()))
print(countPairs(n,arr,k))


