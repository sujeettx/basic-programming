# sum of max two numbers inrespective of their sign (nuclear power -2)
n = int(input())
arr = list(map(int,input().split()))
arr.sort(reverse = True)
if n>2:
    power = arr[0]+arr[1]
print(power)
