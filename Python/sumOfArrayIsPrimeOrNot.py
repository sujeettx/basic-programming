#program to check sum of array is prime or not
def prime(n):
    if(n<=1):
        return False
    i = 2
    sqrt = int(n**0.5)
    while(i<=sqrt):
        if n%1 == 0:
            return False
        i+=1
    return True

def aaraySum(arr,n):
    sum = 0
    for i in range (n):
        sum+=arr[i]
    x = prime(sum)
    if(x):
        print("sum is prime")
    else:
        print("not prime")


n = int(input())
arr = list(map(int,input().split()))
aaraySum(arr,n)

        
