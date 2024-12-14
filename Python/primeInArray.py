# program to check how many prime numbers present in the array

def Prime(n):
    if(n<1):
        return False
    sqrt = int(n**0.5)
    i = 2
    while(i<=sqrt):
        if n%i == 0:
            return False
        i = i+1
    return True
n = int(input())
arr = list(map(int,input().split()))
sum = 0
for i in range (0,n,1):
    x = Prime(arr[i])
    if x == True:
        sum+=1

print(sum)
