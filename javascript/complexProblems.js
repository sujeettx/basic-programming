// Import required functions from another file
import { 
    prime, 
    palindrome, 
    sumOfDigits, 
    reverse, 
    checkNumEvenOdd, 
    productOfNum, 
    spyNumber, 
    factorial, 
    lcmCalculate, 
    armstrong 
} from './basicQuestions';

// Program 1: Complex conditions with palindrome and prime checks
let program1 = (n) => {
    if (palindrome(n)) {
        return prime(sumOfDigits(n));
    } else {
        return prime(reverse(n));
    }
};
// console.log(program1(24));

// Program 2: Complex conditions with spy and Armstrong numbers
let program2 = (n) => {
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
// console.log(program2(22));

// Program 3: Complex condition using factorial and LCM
let program3 = (n) => {
    let fact = factorial(n);
    return prime(lcmCalculate(fact, 10));
};
// console.log(program3(5));
