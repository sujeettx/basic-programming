# absolute defference of even and odd index in the array
def absoluteDef(n,arr):
    evenIndex = 0
    oddIndex = 0
    for i in range (n):
        if arr[i]%2 ==0:
            evenIndex+=1
        else:
            oddIndex+=1
    return abs(evenIndex-oddIndex)

n = int(input())
arr  = list(map(int,input().split()))
print(absoluteDef(n,arr))
