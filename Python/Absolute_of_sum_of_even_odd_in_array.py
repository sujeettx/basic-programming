def Absolute(arr):
    EvenSum = 0
    oddSum = 0
    for i in arr:
        if i%2 ==0:
            EvenSum+=i
        else:
         oddSum+=i
    return abs(EvenSum-oddSum)

n = int(input())
arr = list(map(int,input().split()))
print(Absolute(arr))
