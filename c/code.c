//  1. Program for swapping two numbers with the help of a third variable
#include<stdio.h>
void swap(int a, int b) {
    int c;
    c = a;
    a = b;
    b = c;
    printf("after swapping a = %d and b = %d", a, b);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(a, b);
    return 0;
}

//  2. Program for swapping two numbers without a third variable
#include<stdio.h>
void swap(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping a = %d and b = %d", a, b);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(a, b);
    return 0;
}

//  3. Program for swapping two numbers using XOR operator
#include<stdio.h>
void swap(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("after swapping numbers a = %d and b = %d", a, b);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(a, b);
    return 0;
}

//  4. Program for swapping three numbers without a third variable
#include<stdio.h>
void swap(int a, int b, int c) {
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;
    printf("after swapping a = %d b = %d and c = %d", a, b, c);
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    swap(a, b, c);
    return 0;
}

//  5. Program to check if a year is a leap year or not
#include<stdio.h>
void checkYear(int year) {
    if(year % 400 == 0) {
        printf("year is leap year");
    }
    else if (year % 4 == 0 && year % 100 != 0) {
        printf("leap year");
    }
    else {
        printf("not a leap year");
    }
}
int main() {
    int year;
    scanf("%d", &year);
    checkYear(year);
    return 0;
}

//  6. Program for sum of digits of a number
#include<stdio.h>
int sumOfDigit(int num) {
    int b, sum = 0;
    while(num) {
        b = num % 10;
        sum = sum + b;
        num = num / 10;
    }
    return sum;
}
int main() {
    int number, ans;
    scanf("%d", &number);
    ans = sumOfDigit(number);
    printf("sum digits is %d", ans);
    return 0;
}

//  7. Program to reverse a number
#include<stdio.h>
int reverseNum(int num) {
    int b, reversedNumBer = 0;
    while(num) {
        b = num % 10;
        reversedNumBer = (reversedNumBer * 10) + b;
        num = num / 10;
    }
    return reversedNumBer;
}
int main() {
    int number, ans;
    scanf("%d", &number);
    ans = reverseNum(number);
    printf("reversed number is %d", ans);
    return 0;
}

//  8. Program to check if a number is a palindrome
#include<stdio.h>
#include<stdbool.h>
int checkPalindrome(int num) {
    int b, reversenum = 0, a;
    a = num;
    while(num) {
        b = num % 10;
        reversenum = (reversenum * 10) + b;
        num = num / 10;
    }
    if(reversenum == a) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int number;
    scanf("%d", &number);
    if(checkPalindrome(number)) {
        printf("%d number is palindrome", number);
    }
    else {
        printf("%d not a palindrome", number);
    }
    return 0;
}

//  9. Program to calculate the factorial of a number
#include<stdio.h>
int fact(int num) {
    if(num == 0) {
        return 1;
    }
    return num * fact(num - 1);
}
int main() {
    int num, factorial;
    scanf("%d", &num);
    factorial = fact(num);
    printf("%d is factorial of this number %d", factorial, num);
    return 0;
}

//  10. Program to check if a number is a strong number
#include<stdio.h>
#include<stdbool.h>
int fact(int num) {
    if(num == 0) {
        return 1;
    }
    return num * fact(num - 1);
}
bool checkStrongNum(int n) {
    int b, value = 0, temp;
    temp = n;
    while(n) {
        b = n % 10;
        value = value + fact(b);
        n = n / 10;
    }
    return value == temp;
}
int main() {
    int number;
    scanf("%d", &number);
    if(checkStrongNum(number)) {
        printf("%d is strong number", number);
    }
    else {
        printf("%d not a strong number", number);
    }
    return 0;
}

//  11. Program to check if a number is even or odd
#include<stdio.h>
#include<stdbool.h>
bool checkNum(int n) {
    return n % 2 == 0;
}
int main() {
    int n;
    scanf("%d", &n);
    if(checkNum(n)) {
        printf("%d is even ", n);
    }
    else {
        printf("%d is odd", n);
    }
    return 0;
}

// 12. Program to calculate the product of the digits of a number
#include<stdio.h>
int productNum(int n) {
    int b, value = 1;
    while(n) {
        b = n % 10;
        value = value * b;
        n = n / 10;
    }
    return value;
}
int main() {
    int n, ans;
    scanf("%d", &n);
    ans = productNum(n);
    printf("%d is product of %d number", ans, n);
    return 0;
}

//  13. Program to check if a number is a SPY number
#include<stdio.h>
#include<stdbool.h>
bool SpyNum(int n) {
    int b, product = 1, sum = 0;
    while(n) {
        b = n % 10;
        product = product * b;
        sum = sum + b;
        n = n / 10;
    }
    return product == sum;
}
int main() {
    int n;
    scanf("%d", &n);
    if(SpyNum(n)) {
        printf("%d is SPY number", n);
    }
    else {
        printf("%d is not a SPY number", n);
    }
    return 0;
}

//  14. Program to check if a number is an Armstrong number
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int CalcuCount(int n) {
    int b, count = 0;
    while(n) {
        b = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}

bool armstrongNum(int n) {
    int b, value = 0, count, a;
    a = n;
    count = CalcuCount(n);
    while(n) {
        b = n % 10;
        value = value + pow(b, count);
        n = n / 10;
    }
    return value == a;
}

int main() {
    int n;
    scanf("%d", &n);
    if(armstrongNum(n)) {
        printf("%d is an Armstrong number", n);
    } else {
        printf("%d is not an Armstrong number", n);
    }
    return 0;
}

//  15. Program to check if a number is a Disarium number
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int CalcuCount(int n) {
    int b, count = 0;
    while(n) {
        b = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}

bool DisariumNum(int n) {
    int b, value = 0, count, a;
    a = n;
    count = CalcuCount(n);
    while(n) {
        b = n % 10;
        value = value + pow(b, count);
        n = n / 10;
        count--;
    }
    return value == a;
}

int main() {
    int n;
    scanf("%d", &n);
    if(DisariumNum(n)) {
        printf("%d is a Disarium number", n);
    } else {
        printf("%d is not a Disarium number", n);
    }
    return 0;
}

//  16. Program to check if a number is a Sunny number
#include<stdio.h>
#include<math.h>
int main() {
    int n, sunny;
    float ans;
    scanf("%d", &n);
    sunny = n + 1;
    ans = sqrt(sunny);
    if(ans == (int)ans) {
        printf("Sunny number");
    } else {
        printf("Not a Sunny number");
    }
    return 0;
}

//  17. Program to check if a number is a prime number
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool CheckPrime(int value) {
    if(value <= 1) {
        return false;
    }
    int square = sqrt(value);
    for(int i = 2; i <= square; i++) {
        if(value % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    if(CheckPrime(n)) {
        printf("%d is a prime number", n);
    } else {
        printf("%d is not a prime number", n);
    }
    return 0;
}

// 18. Program to print Fibonacci series
#include<stdio.h>
void fibonacciSeries(int n) {
    if(n == 0) {
        printf("0\n");
    } else if(n == 1) {
        printf("0 1\n");
    } else {
        int a = 0, b = 1;
        printf("0 1 ");
        n = n - 2;
        while(n) {
            int c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
            n--;
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    fibonacciSeries(n);
    return 0;
}

// 19. Program to check if a number is in the Fibonacci series
#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool checkNum(int n) {
    double a = sqrt(5 * n * n + 4);
    double b = sqrt(5 * n * n - 4);
    return a == (int)a || b == (int)b;
}

int main() {
    int n;
    scanf("%d", &n);
    if(checkNum(n)) {
        printf("%d is present in the Fibonacci series.", n);
    } else {
        printf("%d is not present in the Fibonacci series.", n);
    }
    return 0;
}

// 20. Program to calculate the sum of array elements
#include<stdio.h>
int sumOfArray(int n, int arr[]) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n, ans;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ans = sumOfArray(n, arr);
    printf("Sum of array elements is %d", ans);
    return 0;
}

// 21. selection sort function
#include<stdio.h>

void selectionSort(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    selectionSort(n, arr);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


// 22. binary search function
#include<stdio.h>
#include<stdbool.h>

bool binarySearch(int n, int arr[], int x) {
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
        if (x == arr[mid]) {
            return true;
        } else if (x > arr[mid]) {
            start = mid + 1;
            mid = (start + end) / 2;
        } else {
            end = mid - 1;
            mid = (start + end) / 2;
        }
    }
    return false;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (binarySearch(n, arr, x)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}

// 23 find nthPrime number 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int nthPrime(int n) {
    int count = 0, x = 2;
    while (1) {
        if (CheckPrime(x)) {
            count++;
        }
        if (count == n) {
            return x;
        }
        x++;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", nthPrime(n));
    return 0;
}

//24. nth fibonacci number 
#include <stdio.h>

int nthFibonacciNumber(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    int a = 0, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", nthFibonacciNumber(n));
    return 0;
}

// 25 .two numbers lcm
#include <stdio.h>

int lcmCalculate(int a, int b) {
    if (a == b) {
        return a;
    }
    int max = (a > b) ? a : b;
    int i = max;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max += i;
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("LCM of %d and %d is %d\n", a, b, lcmCalculate(a, b));
    return 0;
}
