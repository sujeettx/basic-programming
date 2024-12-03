// program for even number of 0 to 100

let printevennumber = (n)=>{
    for(let i =1;i<=n;i++){
        if(i%2==0){
            console.log(`even=> ${i}`);  
        }
    }
}
// printevennumber(100)

// program for print odd number from 0 to 100
let printoddnumber = (n)=>{
    for(let i =0;i<=n;i++){
        if(i%2!=0){
            console.log(`odd number=>${i}`);       
        }
    }
}
// printoddnumber(100)

//  program for table of 7 
let table = (n)=>{
    for(let i = 1;i<=10;i++){
        console.log(`${n}*${i}=> ${n*i}`);
    }
}
// table(6)

// greatest of three numbers

let greatestofthree = (a,b,c)=>{
    if(a>b && a>c){
        return a;
    }
    if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
// console.log(greatestofthree(80,78,5));

// program for sum of n natural numbers using loop
let sumofnAtural = (n)=>{
    let sum = 0;
    for(let i = 1; i<=n;i++){
        sum+=i;
    }
    return sum;
}
// console.log(sumofnAtural(5));

// using math formula

let sumofnaturalk = (n)=>{
   let sum = (n*(n+1))/2;
    return sum
}
// console.log(sumofnaturalk(5));

// program of sum of square of nnatural numbers

let sumofsquarenatural = (n)=>{
    let sum = (n*(n+1)*(2*(n)+1))/6;
    return sum;
}

console.log(sumofsquarenatural(5))
