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