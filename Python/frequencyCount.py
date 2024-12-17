#  count frequency of each element i array using hash function
#  count frequency of each element i array using hash function in descending order
#  count frequency of each element i array using hash function in assending order
# remove duplicate vLUE elements from i array

# how many times element occured 
def freqCount(n,arr):
    d = {}
    for i in arr:
        d[i]=0
    for i in arr:
        d[i]=d[i]+1
    for k,v in d.items():
        print(k,"occured",v,"times")
n  = int(input())
arr = list(map(int,input().split()))
freqCount(n,arr)

# one time occured
def freqCount(n,arr):
    d = {}
    for i in arr:
        d[i]=0
    for i in arr:
        d[i]=d[i]+1
    for k,v in d.items():
        if(k==1):
            print(k,"occured",v,"times")
n  = int(input())
arr = list(map(int,input().split()))
freqCount(n,arr)

# frecuency count in assending order
def freqCount(n,arr):
    d = {}
    for i in arr:
        d[i]=0
    for i in arr:
        d[i]=d[i]+1
    sorted_d = dict(sorted(d.items(), key=lambda item: item[1]))
    for k,v in sorted_d.items():
        print(k,"occured",v,"times")
n  = int(input())
arr = list(map(int,input().split()))
freqCount(n,arr)

# frecuency count in descending order
def freqCount(n,arr):
    d = {}
    for i in arr:
        d[i]=0
    for i in arr:
        d[i]=d[i]+1
    sorted_d = dict(sorted(d.items(), key=lambda item: item[1]),reverse=True)
    for k,v in sorted_d.items():
        print(k,"occured",v,"times")
n  = int(input())
arr = list(map(int,input().split()))
freqCount(n,arr)

# remove duplicate vLUE elements from i array

def freqCount(n,arr):
    d = {}
    for i in arr:
        d[i]=0
    for k in d.keys():
        print(k)
n  = int(input())
arr = list(map(int,input().split()))
freqCount(n,arr)