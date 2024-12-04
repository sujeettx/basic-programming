// // program for check number is prime or not 

// let PrimeNumCheck = (n)=>{
//     if(n<=1){
//         return console.log("not a prime number");
//     }
//     let squre = Math.sqrt(n);
//     // let i = 2
//     // while(i<=squre){
//     //     if(n%i==0){
//     //         return console.log("not a prime number");
//     //     }
//     //     i++;    
//     // }
//     for(let i = 2;i<=squre;i++){
//         if(n%i==0){
//             return console.log("not a prime number");
//         }
//     }
//    return console.log("prime number");
// }
// // PrimeNumCheck(11)
// // let sumOfnatural = (n)=>{
// //    let sum = (n*(n+1))/2
// //    return sum;
// // }
// // console.log(sumOfnatural(12345678910));
// // let sum = 0
// // let sumof = (n)=>{
// //     for(let i = 0;i<=n;i++){
// //        sum = sum+i
// //     }
// //     return sum;
// // }
// // console.log(sumof(12345678910));
// //  program to print Fibanacci Sequence by using iteration

// let FibanacciSequence = (n)=>{
//     if(n==1){
//         console.log(0);
//     }
//     else if(n==1){
//         console.log(0);
//         console.log(1);  
//     }
//     else{
//         let a = 0;
//         let b = 1;
//         console.log(0);
//         console.log(1);
//         n = n-2;
//         while(n){
//             c = a+b;
//             console.log(c);      
//             a = b
//             b = c;
//             n = n-1
//         }
//     }
// }

// // FibanacciSequence()
// console.log();



// // lowest common factor

// let lcmcalculate = (a,b)=>{
//     if(a==b){
//         return a;
//     }
//     let max;
//     if(a>b){
//         max = a;
//     }
//     else{
//         max = b;
//     }
//     let i = max;
//     while(true){
//        if(max%a==0 && max%b==0){
//         return max;
//        }
//        max =  max+i;
//     }
// }

// console.log(lcmcalculate(12,10))

// // program for check automafic number 

// let marfic = (n)=>{
//     let square = n*n;
//     while(n){
//         if(n%10 != square%10){
//             return false;
//         }
//         n = Math.floor(n/10);
//         square =Math.floor(square/10);
//     }
//     return true;
// }

// let ans = marfic(5)
// if(ans){
//     console.log("automarfic");
// }
// else{
//     console.log("not automarfic");
// }

let sumofdigit = (n)=>{
    let sum = 0;
    while(n){
       let b= Math.floor(n%10);
        sum+=b;
        n = Math.floor(n/10);
    }
    return sum;
};

let checknumevenodd = (n)=>{
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

let productofnum = (n)=>{
   let product = 1;
    while(n){
       let b = Math.floor(n%10);
        product*=b;
        n = Math.floor(n/10);
    }
    return product;
}

let program = (n)=>{
    if(checknumevenodd(n)){
        let sum = sumofdigit(n);
        if(checknumevenodd(sum)){
            console.log("even");      
        }
        else{
            console.log("odd");          
        }
    }
    else{
        // let product = productofnum(n);
        if(checknumevenodd(productofnum(n))){
            console.log("even");      
        }
        else{
            console.log("odd");      
        }
    }
}

// program(3);


let reverse = (n)=>{
    let reverse = 1;
    while(n){
         let b = Math.floor(n%10);
         reverse = (reverse*10)+b;
         n = Math.floor(n/10);
    }
    return reverse
}
let palindrone = (n)=>{
   let rev = reverse(n);
   if(rev == n){
    return true;
   }
   else{
    return false;
   }
}

let prime = (n)=>{
    if(n<=1){
        return true;
    }
    let sqare = Math.floor(Math.sqrt(n));
    for(let i =2;i<=sqare;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


let program2 = (n)=>{
    if(palindrone(n)){
        // let sum = sumofdigit(n);
        if(prime(sumofdigit(n))){
            return true;
        }
        else{
            return false;
        }
    }
    else
    {
        let rever = reverse(n);
        if(prime(rever)){
            return true;
        }
        else{
            return false
        }
    }
}
// console.log(program2(24));


//  program 3

let spynumber = (n)=>{
    if(productofnum(n) == sumofdigit(n)){
        return true;
    }
    else{
        return false;
    }
}
// console.log(spynumber(22));
let counter = (n)=>{ 
 let count = 0;
   while(n){
    n = Math.floor(n/10)
    count++
   }
    return count;
}

let armstrong = (n)=>{
    let original = n;
    let count = counter(n)
    let answer = 0;
    while(n){
        let b = Math.floor(n%10);
        answer = answer +Math.pow(b,count)
        n = Math.floor(n/10);
    }
    if(answer==original){
        return true
    }
    else{
        return false;
    }
}

let program3 = (n)=>{
    if(spynumber(n)){
        let sum = sumofdigit(n);
        if(checknumevenodd(sum)){
            if(armstrong(sum)){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(prime(sum)){
                return true;
            }
            else{
                return false;
            }
        }
    }
    else{
        let produ = productofnum(n);
        if(checknumevenodd(produ)){
            if(armstrong(produ)){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(prime(produ)){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
console.log(program3(22));

