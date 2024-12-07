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

let sumofnatural = (n)=>{
   let sum = (n*(n+1))/2;
    return sum
}
// console.log(sumofnatural(5));

// program of sum of square of nnatural numbers

let sumofsquarenatural = (n)=>{
    let sum = (n*(n+1)*(2*(n)+1))/6;
    return sum;
}

// console.log(sumofsquarenatural(5))

// sum of cubes of first n natural number

let sumOfCubes = (n)=>{
    let sum = Math.pow((n*(n+1))/2,2);
    return sum;
}

// console.log(sumOfCubes(3));

// program to check number is divisible by 8 or not
num8divide = (n)=>{
    return (n%8==0)
}

// console.log(num8divide(24));

// greatest of 4 numbers 

GreatestOf4 = (a,b,c,d)=>{
    let arr = [a,b,c,d];
    let max = arr[0];
    for(let i = 1;i < arr.length;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

// console.log(GreatestOf4(10,40,50,50));


// grade system 

let gradeSystem = (grade)=>{
    if(grade>90 && grade<=100){
        return console.log("A+");   
    }
    else if(grade>80 && grade<=90){
        return console.log("A");  
    }
    else if(grade>70 && grade<=80){
        return console.log("B+");
        
    }
    else if(grade>60 && grade<=70){
        return console.log("B");
        
    }
    else if (grade>33 && grade<=60){
        return console.log("C");
        
    }
    else if(grade<33){
        return console.log("FAIL");
        
    }
    else{
        return console.log("invalid number");
    }
}
gradeSystem(13)