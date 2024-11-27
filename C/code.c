// #include<stdio.h>
// #include<math.h>
// #include<stdbool.h>

// 1. Swap two numbers with the help of a third variable
void swap(int a, int b) {
    int c = a;
    a = b;
    b = c;
    printf("After swapping a = %d and b = %d\n", a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(a, b);
    return 0;
}

// 2. Swap two numbers without a third variable
void swapWithoutThird(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping a = %d and b = %d\n", a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swapWithoutThird(a, b);
    return 0;
}

// 3. Swap two numbers using XOR operator
void swapUsingXOR(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping a = %d and b = %d\n", a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swapUsingXOR(a, b);
    return 0;
}

// 4. Swap three numbers without a third variable
void swapThree(int a, int b, int c) {
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;
    printf("After swapping a = %d b = %d and c = %d\n", a, b, c);
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    swapThree(a, b, c);
    return 0;
}

// 5. Check if a year is a leap year
void checkYear(int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
}

int main() {
    int year;
    scanf("%d", &year);
    checkYear(year);
    return 0;
}

// 6. Sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("Sum of digits is %d\n", sumOfDigits(number));
    return 0;
}

// 7. Reverse a number
int reverseNum(int num) {
    int reversedNumber = 0;
    while (num) {
        reversedNumber = reversedNumber * 10 + num % 10;
        num /= 10;
    }
    return reversedNumber;
}

int main() {
    int number;
    scanf("%d", &number);
    printf("Reversed number is %d\n", reverseNum(number));
    return 0;
}

// 8. Check if a number is a palindrome
bool checkPalindrome(int num) {
    return num == reverseNum(num);
}

int main() {
    int number;
    scanf("%d", &number);
    if (checkPalindrome(number)) {
        printf("%d is a palindrome\n", number);
    } else {
        printf("%d is not a palindrome\n", number);
    }
    return 0;
}

// 9. Calculate factorial of a number
int fact(int num) {
    return (num == 0) ? 1 : num * fact(num - 1);
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d is the factorial of %d\n", fact(num), num);
    return 0;
}

// 10. Check if a number is a strong number
bool isStrongNum(int num) {
    int temp = num, sum = 0;
    while (num) {
        sum += fact(num % 10);
        num /= 10;
    }
    return sum == temp;
}

int main() {
    int number;
    scanf("%d", &number);
    if (isStrongNum(number)) {
        printf("%d is a strong number\n", number);
    } else {
        printf("%d is not a strong number\n", number);
    }
    return 0;
}

// 11. Check if a number is even or odd
bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isEven(n)) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }
    return 0;
}

// 12. Calculate the product of digits of a number
int productOfDigits(int num) {
    int product = 1;
    while (num) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Product of digits is %d\n", productOfDigits(n));
    return 0;
}

// 13. Check if a number is a SPY number
bool isSpyNum(int num) {
    int sum = 0, product = 1;
    while (num) {
        int digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }
    return sum == product;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isSpyNum(n)) {
        printf("%d is a SPY number\n", n);
    } else {
        printf("%d is not a SPY number\n", n);
    }
    return 0;
}

// 14. Check if a number is an Armstrong number
int digitCount(int num) {
    int count = 0;
    while (num) {
        count++;
        num /= 10;
    }
    return count;
}

bool isArmstrong(int num) {
    int original = num, sum = 0, power = digitCount(num);
    while (num) {
        sum += pow(num % 10, power);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
    return 0;
}

// 15. Check if a number is a Disarium number
bool isDisarium(int num) {
    int original = num, sum = 0, power = digitCount(num);
    while (num) {
        sum += pow(num % 10, power--);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isDisarium(n)) {
        printf("%d is a Disarium number\n", n);
    } else {
        printf("%d is not a Disarium number\n", n);
    }
    return 0;
}
