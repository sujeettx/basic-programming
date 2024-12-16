// prpgram fo check how many armstrong numbers are present in the array

const {armstrong} = require("./basicQuestion")
let armstrongInarray = (arr)=>{
    let sumcount = 0,sumelement = 0;
    for(let i=0; i<arr.length; i++){
        if(armstrong(arr[i])){
            sumcount += 1; // for how many armstrong elements in the array
            sumelement+=arr[i] // sum of the armstrong elements in the array
        }
    }
    return sumelement;
}
let arr = [2,3,4,5,6,7,8,9]
console.log(armstrongInarray(arr)); 
