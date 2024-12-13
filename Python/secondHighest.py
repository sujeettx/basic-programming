def secondHighest(n,arr):
    highest = float("-inf")
    secondHigh = float("-inf")
    for i in range (0,n,1):
        if(arr[i]>highest):
            secondHigh = highest
            highest = arr[i]
        elif(arr[i]>secondHigh and arr[i] != highest):
            secondHigh = arr[i]
    return secondHigh


n =  int(input())
arr = list(map(int,input().split()))
print(secondHighest(n,arr))
