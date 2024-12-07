// Program 1: Check if a number is prime or not
let PrimeNumCheck = (n) => {
    if (n <= 1) {
        return console.log("Not a prime number");
    }
    let square = Math.sqrt(n);
    for (let i = 2; i <= square; i++) {
        if (n % i === 0) {
            return console.log("Not a prime number");
        }
    }
    return console.log("Prime number");
};
// PrimeNumCheck(11);

// Program 2: Calculate the sum of natural numbers
let sumOfNatural = (n) => {
    let sum = (n * (n + 1)) / 2;
    return sum;
};
// console.log(sumOfNatural(12345678910));

// Program 3: Calculate the sum using iteration
let sum = 0;
let sumOf = (n) => {
    for (let i = 0; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
};
// console.log(sumOf(12345678910));

// Program 4: Generate Fibonacci sequence using iteration
let FibonacciSequence = (n) => {
    if (n === 1) {
        console.log(0);
    } else if (n === 2) {
        console.log(0);
        console.log(1);
    } else {
        let a = 0, b = 1;
        console.log(a);
        console.log(b);
        n -= 2;
        while (n) {
            let c = a + b;
            console.log(c);
            a = b;
            b = c;
            n -= 1;
        }
    }
};
// FibonacciSequence(10);

// Program 5: Calculate the LCM of two numbers
let lcmCalculate = (a, b) => {
    if (a === b) {
        return a;
    }
    let max = a > b ? a : b;
    let i = max;
    while (true) {
        if (max % a === 0 && max % b === 0) {
            return max;
        }
        max += i;
    }
};
// console.log(lcmCalculate(12, 10));

// Program 6: Check if a number is automorphic
let automorphic = (n) => {
    let square = n * n;
    while (n) {
        if (n % 10 !== square % 10) {
            return false;
        }
        n = Math.floor(n / 10);
        square = Math.floor(square / 10);
    }
    return true;
};
// let ans = automorphic(5);
// console.log(ans ? "Automorphic" : "Not Automorphic");

// Program 7: Sum of digits of a number
let sumOfDigits = (n) => {
    let sum = 0;
    while (n) {
        sum += Math.floor(n % 10);
        n = Math.floor(n / 10);
    }
    return sum;
};

// Program 8: Check if a number is even or odd
let checkNumEvenOdd = (n) => {
    return n % 2 === 0;
};

// Program 9: Product of digits of a number
let productOfNum = (n) => {
    let product = 1;
    while (n) {
        product *= Math.floor(n % 10);
        n = Math.floor(n / 10);
    }
    return product;
};

// Program 10: Check conditions based on sum/product of digits
let program = (n) => {
    if (checkNumEvenOdd(n)) {
        let sum = sumOfDigits(n);
        console.log(checkNumEvenOdd(sum) ? "Even" : "Odd");
    } else {
        console.log(checkNumEvenOdd(productOfNum(n)) ? "Even" : "Odd");
    }
};
// program(3);

// Program 11: Reverse a number
let reverse = (n) => {
    let reversed = 0;
    while (n) {
        reversed = reversed * 10 + Math.floor(n % 10);
        n = Math.floor(n / 10);
    }
    return reversed;
};

// Program 12: Check if a number is a palindrome
let palindrome = (n) => {
    return reverse(n) === n;
};

// Program 13: Check if a number is prime
let prime = (n) => {
    if (n <= 1) {
        return false;
    }
    let square = Math.floor(Math.sqrt(n));
    for (let i = 2; i <= square; i++) {
        if (n % i === 0) {
            return false;
        }
    }
    return true;
};

// Program 14: Complex conditions with palindrome and prime checks
let program2 = (n) => {
    if (palindrome(n)) {
        return prime(sumOfDigits(n));
    } else {
        return prime(reverse(n));
    }
};
// console.log(program2(24));

// Program 15: Check if a number is a spy number
let spyNumber = (n) => {
    return productOfNum(n) === sumOfDigits(n);
};
// console.log(spyNumber(22));

// Program 16: Count digits in a number
let counter = (n) => {
    let count = 0;
    while (n) {
        n = Math.floor(n / 10);
        count++;
    }
    return count;
};

// Program 17: Check if a number is an Armstrong number
let armstrong = (n) => {
    let original = n, count = counter(n), answer = 0;
    while (n) {
        let digit = Math.floor(n % 10);
        answer += Math.pow(digit, count);
        n = Math.floor(n / 10);
    }
    return answer === original;
};

// Program 18: Complex conditions with spy and Armstrong numbers
let program3 = (n) => {
    if (spyNumber(n)) {
        let sum = sumOfDigits(n);
        if (checkNumEvenOdd(sum)) {
            return armstrong(sum);
        } else {
            return prime(sum);
        }
    } else {
        let product = productOfNum(n);
        if (checkNumEvenOdd(product)) {
            return armstrong(product);
        } else {
            return prime(product);
        }
    }
};
// console.log(program3(22));

// Program 19: Factorial of a number
let factorial = (n) => {
    return n <= 1 ? 1 : n * factorial(n - 1);
};

// Program 20: Complex condition using factorial and LCM
let program4 = (n) => {
    let fact = factorial(n);
    return prime(lcmCalculate(fact, 10));
};

// Program 21: Find the nth prime number
let nthPrime = (n) => {
    let count = 0, x = 2;
    while (true) {
        if (prime(x)) {
            count++;
        }
        if (count === n) {
            return x;
        }
        x++;
    }
};
// console.log(nthPrime(4));

// Program 22: Find the nth Fibonacci number
let nthFibonacciNumber = (n) => {
    if (n === 1) return 0;
    if (n === 2) return 1;
    let a = 0, b = 1, c;
    for (let i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
};
// console.log(nthFibonacciNumber(10));
