# 1. program for swap two number using third variable
# def swap(a,b):
#     c = a 
#     a = b 
#     b = c 
#     print(f"after swapping number a = {a} and b = {b} ")

# a = int(input())
# b = int(input())
# swap(a,b)

#2. program for swapping two number without third variable

# def swap(a,b):
#     a = a+b 
#     b = a-b
#     a = a-b
#     print(f"after swap a = {a} and b = {b}")

# a = int(input())
# b = int(input())
# swap(a,b)

# 3. program for swapping two number using ex-or operator
# def swap(a,b):
#     a = a^b 
#     b = a^b
#     a = a^b
#     print(f"after swap a = {a} and b = {b}")

# a = int(input())
# b = int(input())
# swap(a,b)

# 4. program for swapping three nubers without any extra variable

# def swap(a,b,c):
#     a = a+b+c
#     b = a-b-c
#     c = a-b-c
#     a = a-b-c
#     print(f"after swap a = {a} b = {b} and c = {c}")

# a = int(input())
# b = int(input())
# c = int(input())
# swap(a,b,c)


# 5. program for checking number is even or odd
# def checkNum(n):
#     return n%2==0
# n = int(input())
# if(checkNum(n)):
#     print(f"{n} is even")
# else:
#     print(f"{n} is odd")
    
    
# 6. program for calulate factorials' 

# def fact(n):
#     if(n==0):
#         return 1
#     return n*fact(n-1)
# n = int(input())
# ans = fact(n);
# print(f"{ans} is facorail of {n}")

# 7. program for calculate a sum of digit of a number
# def sumdigt(n):
#     sum = 0
#     while(n):
#         b = n%10
#         sum+=b
#         n = n//10
#     return sum
# n = int(input())
# ans = sumdigt(n)
# print(f"{n} sum of digit is {ans} ")

# 8. program for reverse a number
# def reverseNum(n):
#     revese = 0
#     while(n):
#         b = n%10
#         revese = (revese*10)+b
#         n = n//10
#     return revese
# n = int(input())
# ans = reverseNum(n)
# print(f"{n} of reverse number is {ans} ")

#9. program for check number is palindrome or not
# def checkPalindrome(n):
#     revese = 0
#     original = n
#     while(n):
#         b = n%10
#         revese = (revese*10)+b
#         n = n//10
#     return original == revese
# n = int(input())
# if(checkPalindrome(n)):
#     print(f"{n} is palindrome")
# else:
#     print(f"{n} is not a palindrome")

#10. program for check number is strong number or not 
# def fact(n):
#     if(n==0):
#         return 1
#     return n*fact(n-1)

# def CheckStrongnum(n):
#     factdigit = 0
#     original = n
#     while(n):
#         b = n%10
#         factdigit = factdigit+fact(b)
#         n = n//10
#     return original == factdigit
# n = int(input())
# if(CheckStrongnum(n)):
#     print(f"{n} is strong number")
# else:
#     print(f"{n} is not a strong number")

#11 program for check year is leap year or not

# def CheckYear(year):
#     if(year%400==0 or (year%4==0 and year%100!=0)):
#         print(f"{year} is leap year")
#     else:
#         print(f"{year} is normal year")


# year = int(input())
# CheckYear(year)
    
# 12 . program for calculate product of a number

# def productNum(n):
#     product = 1
#     while(n):
#         b = n%10
#         product = product*b 
#         n = n//10
#     return product
# n = int(input())
# ans = productNum(n)
# print(f"{ans} is product of {n} number")

# 13. program for check number is armstrong number or not

# def counter(n):
#     count = 0
#     while(n):
#         b = n%10
#         count = count+1
#         n = n//10
#     return count
# def armStrong(n):
#     original = n
#     count = counter(n)
#     value = 0
#     while(n):
#         b = n%10
#         value = value+pow(b, count)
#         n = n//10
#     return value == original
# n = int(input())
# if(armStrong(n)):
#     print(f"{n} is armstrong ")
# else:
#     print(f"{n} not strong muber")

# 14. program for check number is Disarium number or not

# def counter(n):
#     count = 0
#     while(n):
#         b = n%10
#         count = count+1
#         n = n//10
#     return count
# def DisariumNUm(n):
#     original = n
#     count = counter(n)
#     value = 0
#     while(n):
#         b = n%10
#         value = value+pow(b, count)
#         n = n//10
#         count = count-1
#     return value == original
# n = int(input())
# if(DisariumNUm(n)):
#     print(f"{n} is Disarium ")
# else:
#     print(f"{n} not Disarium muber")

#15. program for check number is SPY number or not

# def SpyNum(n):
#     Sum = 0
#     product = 1
#     while(n):
#         b =n%10
#         Sum = Sum+b 
#         product = product * b
#         n= n//10
#     return Sum == product
# n = int(input())
# if(SpyNum(n)):
#     print(f"{n} is spy number")
# else:
#     print("not a spy number")

# 16 . program for check number is prime or not 

# import math
# def primeNum(n):
#     if(n<=0):
#        return False
#     else:
#         square = math.sqrt(n)
#         i  =2
#         while(i<=square):
#             if(n%i==0):
#                 return False
#             i = i+1
#         return True

# n = int(input())
# if(primeNum(n)):
#     print("prime number")
# else:
#     print("not prime")

        
        
#17. sum of array element 
# cook your dish here
# def sumOfArry(n,arr):
#     sum = 0;
#     for i in range (n):
#         sum = sum+arr[i]
#     return sum;
# n = int(input())
# arr = list(map(int,input().split()))
# ans = sumOfArry(n,arr)
# print(ans)