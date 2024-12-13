def reverseArray(n,arr):
    start = 0
    end = n-1
    while(start<end):
        arr[start],arr[end] = arr[end],arr[start]
        start += 1
        end -= 1

n = int(input())
arr = list(map(int,input().split()))
reverseArray(n,arr)
for i in arr:
    print(i, end = " ")
