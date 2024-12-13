def secondLowest(n,arr):
    low = float("inf")
    secondLow = float("inf")
    for i in range (0,n,1):
        if(arr[i]<low):
            secondLow = low
            low = arr[i]
        elif(arr[i]<secondLow and arr[i] != low):
            secondLow = arr[i]
    return secondLow


n =  int(input())
arr = list(map(int,input().split()))
print(secondLowest(n,arr))
