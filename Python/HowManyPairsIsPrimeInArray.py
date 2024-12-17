# how many pairs is prime
import math
def prime(n):
    if(n<=0):
       return False
    else:
        square = math.sqrt(n)
        i  =2
        while(i<=square):
            if(n%i==0):
                return False
            i = i+1
        return True

def primePairs(n,arr):
    count = 0
    for i in range(n):
        for j in range (i+1,n):
            if(prime(arr[i]+arr[j])):
                count +=1
                print(arr[i],arr[j],"this pairs is prime")
    return count

n = int(input())
arr = list(map(int,input().split()))
ans  = primePairs(n,arr)
print(ans,"total prime")


