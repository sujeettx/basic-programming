// 1. Program for swapping two numbers with the help of a third variable
function swap(a, b) {
    let c;
    c = a;
    a = b;
    b = c;
    console.log(`after swapping a = ${a} and b = ${b}`);
}

// 2. Program for swapping two numbers without a third variable
function swapWithoutThirdVariable(a, b) {
    a = a + b;
    b = a - b;
    a = a - b;
    console.log(`after swapping a = ${a} and b = ${b}`);
}

// 3. Program for swapping two numbers using XOR operator
function swapUsingXOR(a, b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    console.log(`after swapping numbers a = ${a} and b = ${b}`);
}

// 4. Program for swapping three numbers without a third variable
function swapThreeNumbers(a, b, c) {
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;
    console.log(`after swapping a = ${a} b = ${b} and c = ${c}`);
}

// 5. Program to check if a year is a leap year or not
function checkYear(year) {
    if (year % 400 === 0) {
        console.log("year is leap year");
    } else if (year % 4 === 0 && year % 100 !== 0) {
        console.log("leap year");
    } else {
        console.log("not a leap year");
    }
}

// 6. Program for sum of digits of a number
function sumOfDigit(num) {
    let b, sum = 0;
    while (num) {
        b = num % 10;
        sum = sum + b;
        num = Math.floor(num / 10);
    }
    return sum;
}

// 7. Program to reverse a number
function reverseNum(num) {
    let b, reversedNumBer = 0;
    while (num) {
        b = num % 10;
        reversedNumBer = (reversedNumBer * 10) + b;
        num = Math.floor(num / 10);
    }
    return reversedNumBer;
}

// 8. Program to check if a number is a palindrome
function checkPalindrome(num) {
    let b, reversenum = 0, a;
    a = num;
    while (num) {
        b = num % 10;
        reversenum = (reversenum * 10) + b;
        num = Math.floor(num / 10);
    }
    return reversenum === a;
}

// 9. Program to calculate the factorial of a number
function fact(num) {
    if (num === 0) {
        return 1;
    }
    return num * fact(num - 1);
}

// 10. Program to check if a number is a strong number
function checkStrongNum(n) {
    let b, value = 0, temp;
    temp = n;
    while (n) {
        b = n % 10;
        value = value + fact(b);
        n = Math.floor(n / 10);
    }
    return value === temp;
}

// 11. Program to check if a number is even or odd
function checkNum(n) {
    return n % 2 === 0;
}

// 12. Program to calculate the product of the digits of a number
function productNum(n) {
    let b, value = 1;
    while (n) {
        b = n % 10;
        value = value * b;
        n = Math.floor(n / 10);
    }
    return value;
}

// 13. Program to check if a number is a SPY number
function SpyNum(n) {
    let b, product = 1, sum = 0;
    while (n) {
        b = n % 10;
        product = product * b;
        sum = sum + b;
        n = Math.floor(n / 10);
    }
    return product === sum;
}

// 14. Program to check if a number is an Armstrong number
function CalcuCount(n) {
    let b, count = 0;
    while (n) {
        b = n % 10;
        count++;
        n = Math.floor(n / 10);
    }
    return count;
}

function armstrongNum(n) {
    let b, value = 0, count, a;
    a = n;
    count = CalcuCount(n);
    while (n) {
        b = n % 10;
        value = value + Math.pow(b, count);
        n = Math.floor(n / 10);
    }
    return value === a;
}

// 15. Program to check if a number is a Disarium number
function DisariumNum(n) {
    let b, value = 0, count, a;
    a = n;
    count = CalcuCount(n);
    while (n) {
        b = n % 10;
        value = value + Math.pow(b, count);
        n = Math.floor(n / 10);
        count--;
    }
    return value === a;
}

// 16. Program to check if a number is a Sunny number
function checkSunny(n) {
    let sunny = n + 1;
    let ans = Math.sqrt(sunny);
    if (ans === Math.floor(ans)) {
        console.log("Sunny number");
    } else {
        console.log("Not a Sunny number");
    }
}

// 17. Program to check if a number is a prime number
function CheckPrime(value) {
    if (value <= 1) {
        return false;
    }
    let square = Math.sqrt(value);
    for (let i = 2; i <= square; i++) {
        if (value % i === 0) {
            return false;
        }
    }
    return true;
}

// 18. Program to print Fibonacci series
function fibonacciSeries(n) {
    if (n === 0) {
        console.log("0\n");
    } else if (n === 1) {
        console.log("0 1\n");
    } else {
        let a = 0, b = 1;
        process.stdout.write("0 1 ");
        n = n - 2;
        while (n) {
            let c = a + b;
            process.stdout.write(`${c} `);
            a = b;
            b = c;
            n--;
        }
        console.log();
    }
}

// 19. Program to check if a number is in the Fibonacci series
function checkNumInFibonacci(n) {
    let a = Math.sqrt(5 * n * n + 4);
    let b = Math.sqrt(5 * n * n - 4);
    return a === Math.floor(a) || b === Math.floor(b);
}

// 20. Program to calculate the sum of array elements
function sumOfArray(arr) {
    let sum = 0;
    for (let i = 0; i < arr.length; i++) {
        sum += arr[i];
    }
    return sum;
}

// 21. Selection sort function
function selectionSort(arr) {
    for (let i = 0; i < arr.length; i++) {
        for (let j = i + 1; j < arr.length; j++) {
            if (arr[i] > arr[j]) {
                let temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
  return arr
}

// 22. Binary search function
function binarySearch(arr, x) {
    let start = 0;
    let end = arr.length - 1;
    let mid;

    while (start <= end) {
        mid = Math.floor((start + end) / 2);
        if (x === arr[mid]) {
            return true;
        } else if (x > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}

// 23. Find nth prime number
function nthPrime(n) {
    let count = 0, x = 2;
    while (true) {
        if (CheckPrime(x)) {
            count++;
        }
        if (count === n) {
            return x;
        }
        x++;
    }
}

// 24. nth Fibonacci number
function nthFibonacciNumber(n) {
    if (n === 1) return 0;
    if (n === 2) return 1;
    let a = 0, b = 1, c;
    for (let i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// 25. Two numbers LCM
function lcmCalculate(a, b) {
    if (a === b) {
        return a;
    }
    let max = (a > b) ? a : b;
    let i = max;
    while (true) {
        if (max % a === 0 && max % b === 0) {
            return max;
        }
        max += i;
    }
}
























































































































































module.exports = {
    prime: CheckPrime, 
    palindrome: checkPalindrome, 
    sumOfDigits: sumOfDigit, 
    reverse: reverseNum,
    checkNumEvenOdd: checkNum, 
    productOfNum: productNum, 
    spyNumber: SpyNum, 
    factorial: fact, 
    lcmCalculate: lcmCalculate, 
    armstrong: armstrongNum
};
