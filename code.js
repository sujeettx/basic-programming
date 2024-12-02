// program for check number is prime or not 

let PrimeNumCheck = (n)=>{
    if(n<=1){
        return console.log("not a prime number");
    }
    let squre = Math.sqrt(n);
    // let i = 2
    // while(i<=squre){
    //     if(n%i==0){
    //         return console.log("not a prime number");
    //     }
    //     i++;    
    // }
    for(let i = 2;i<=squre;i++){
        if(n%i==0){
            return console.log("not a prime number");
        }
    }
   return console.log("prime number");
}
// PrimeNumCheck(11)
// let sumOfnatural = (n)=>{
//    let sum = (n*(n+1))/2
//    return sum;
// }
// console.log(sumOfnatural(12345678910));
// let sum = 0
// let sumof = (n)=>{
//     for(let i = 0;i<=n;i++){
//        sum = sum+i
//     }
//     return sum;
// }
// console.log(sumof(12345678910));
//  program to print Fibanacci Sequence by using iteration

let FibanacciSequence = (n)=>{
    if(n==1){
        console.log(0);
    }
    else if(n==1){
        console.log(0);
        console.log(1);  
    }
    else{
        let a = 0;
        let b = 1;
        console.log(0);
        console.log(1);
        n = n-2;
        while(n){
            c = a+b;
            console.log(c);      
            a = b
            b = c;
            n = n-1
        }
    }
}

FibanacciSequence()
console.log(105*105);


