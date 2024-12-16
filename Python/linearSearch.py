def linearSearch(n,arr,x):
    for i in range (n):
        if arr[i] == x:
            return True
    return False

n = int(input())
x = int(input())
arr = list(map(int,input().split()))
if( linearSearch(n,arr,x)):
    print("found")
else:
    print("not found")
