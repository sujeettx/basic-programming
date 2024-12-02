// 1. progeam for swap two number with the help of third variable

// #include<stdio.h>
// void swap(int a , int b){
//     int c;
//     c = a;
//     a = b;
//     b = c;
//     printf("after swapping a = %d and b = %d", a,b);
// }
// int main (){
//     int a,b,ans;
//     scanf("%d %d",&a,&b);
//     swap(a,b);
//     return 0;
// }

//2. program for swapping two numbers without third variable

// #include<stdio.h>
// void swap(int a ,int b){
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     printf("ater swapping a = %d And b = %d",a,b);
// }

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     swap(a,b);
//     return 0;
// }

//3. program for swap two number by using ex-or operator

// #include<stdio.h>
// void swap(int a, int b){
//     a = a^b;
//     b = a^b;
//     a = a^b;
//     printf("after swapping numbers a = %d and b = %d",a,b);
// }

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     swap(a,b);
//     return 0;
// }

// 4. program for swapping three number without third variable
// #include<stdio.h>
// void swap(int a,int b,int c){
//     a = a+b+c;
//     b = a-b-c;
//     c = a-b-c;
//     a = a-b-c;
//     printf("after swapping a = %d b = %d and c = %d", a,b,c);
// }
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     swap(a,b,c);
//     return 0;
// }

//5. program for check year is leap year or not 
// #include<stdio.h>
// void checkYear(int year){
//     if(year%400==0){
//         printf("year is leap year");
//     }
//     else if (year%4==0&&year%100!=0){
//         printf("leap year");
//     }
//     else{
//         printf("not a leap year");
//     }
// }
// int main(){
//     int year;
//     scanf("%d",&year);
//     checkYear(year);
//     return 0;
// }

//6. program for sum of digits of a number 

// #include<stdio.h>
// int sumOfDigit(int num){
//     int b,sum=0;
//     while(num){
//         b = num%10;
//         sum = sum+b;
//         num = num/10;
//     }
//     return sum;
// }
// int main(){
//     int number,ans;
//     scanf("%d",&number);
//     ans = sumOfDigit(number);
//     printf("sum digits is %d",ans);
//     return 0;
// }

// 7. program for reverse a number
 
// #include<stdio.h>
// int reverseNum(int num){
//     int b,reversedNumBer=0;
//     while(num){
//         b = num%10;
//         reversedNumBer = (reversedNumBer*10)+b;
//         num = num/10;
//     }
//     return reversedNumBer;
// }
// int main(){
//     int number,ans;
//     scanf("%d",&number);
//     ans = reverseNum(number);
//     printf("reversed number is %d",ans);
//     return 0;
// }

// 7. program for check a number is palindrome or not
 
// #include<stdio.h>
// #include<stdbool.h>
// int checkPalindrome(int num){
//     int b,reversenum=0,a;
//     a = num;
//     while(num){
//         b = num%10;
//         reversenum = (reversenum*10)+b;
//         num = num/10;
//     }
//     if(reversenum==a){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int number,ans;
//     scanf("%d",&number);
//     if(checkPalindrome(number)){
//         printf("%d number is palindrome",number);
//     }
//     else{
//         printf("%d not a palindrome",number);
//     }
//     return 0;
// }

// 8. program for clculate factorial of a number

// #include<stdio.h>
// int fact (int num){
//     if(num==0){
//         return 1;
//     }
//     return num*fact(num-1);
// }
// int main (){
//     int num,factorail;
//     scanf("%d",&num);
//     factorail = fact(num);
//     printf("%d is factorial of this number %d",factorail,num);
//     return 0;
// }

// 9. program for check number is strong number or not first we write a code for calculate factorial of a number

// #include<stdio.h>
// #include<stdbool.h>
// int fact (int num){
//     if(num==0){
//         return 1;
//     }
//     return num*fact(num-1);
// }

// bool checkStrongnum (int n){
//     int b, value = 0,temp;
//     temp = n;
//     while(n){
//         b = n%10;
//         value = value+fact(b);
//         n = n/10;
//     }
//     if(value == temp){
//         return true;
//     }
//     else{
//         false;
//     }
// }
// int main (){
//     int number;
//     scanf("%d",&number);
//     if(checkStrongnum(number)){
//         printf("%d is strong number",number);
//     }
//     else{
//         printf("%d not a strong number",number);
//     }
//     return 0;
// }

//10. program for check number is even or odd

// #include<stdio.h>
// #include<stdbool.h>
// bool checkNum(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     if(checkNum(n)){
//         printf("%d is even ",n);
//     }
//     else{
//         printf("%d is odd");
//     }
//     return 0;
// }

// 11. program for calculate product of number
// #include<stdio.h>
// int productNum (int n ){
//     int b , value=1;
//     while(n){
//         b = n%10;
//         value = value*b;
//         n = n/10;
//     }
//     return value;
// }
// int main(){
//     int n,ans;
//     scanf("%d",&n);
//     ans = productNum(n);
//     printf("%d is product of %d number", ans,n);
//     return 0;
// }

// 12. program for check number is a SPY number or not
// #include<stdio.h>
// #include<stdbool.h>
// bool SpyNum (int n ){
//     int b , product=1,sum = 0;
//     while(n){
//         b = n%10;
//         product = product*b;
//         sum =sum+b; 
//         n = n/10;
//     }
//     if(product == sum){
//         return true;
//     }
//     else{
//        return false;
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(SpyNum(n)){
//         printf("%d is SPY number",n);
//     }
//     else{
//         printf("not a SPY number");
//     }
//     return 0;
// }

//13.  program for check number is armstrong or not
// #include<stdio.h>
// #include<math.h>
// #include<stdbool.h>

// int CalcuCount(int n){
//     int b,count = 0;
//     while(n){
//         b = n%10;
//         count++;
//         n = n/10;
//     }
//     return count;
// }

// bool armstrongNum (int n){
//     int b, value = 0,count,a;
//     a = n;
//     count = CalcuCount(n);
//     while(n){
//         b = n%10;
//         value = value+(pow(b,count));
//         n = n/10;
//     }
//    if( value ==a){
//        return true;
//    }
//    else{
//        return false;
//    }
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     if(armstrongNum(n)){
//          printf("%d is armstrong",n);
//     }
//     else{
//          printf("%d is not an armstrong",n);
//     }
//     return 0;
// }

// 14. program for check number is Disarium number or not
// #include<stdio.h>
// #include<math.h>
// #include<stdbool.h>

// int CalcuCount(int n){
//     int b,count=0;
//     while(n){
//         b = n%10;
//         count++;
//         n = n/10;
//     }
//     return count;
// }

// bool DisariumNum (int n){
//     int b, value = 0,count,a;
//     a = n;
//     count = CalcuCount(n);
//     while(n){
//         b = n%10;
//         value = value+(pow(b,count));
//         n = n/10;
//         count = count-1;
//     }
//    if( value ==a){
//        return true;
//    }
//    else{
//        return false;
//    }
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     if(DisariumNum(n)){
//          printf("%d is Disarium number",n);
//     }
//     else{
//          printf("%d is not an Disarium number",n);
//     }
//     return 0;
// } 

//15. program for check number is sunny number or not
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n ;
//     int sunny;
//     float ans;
//     scanf("%d",&n);
//     sunny = n+1;
//     ans = sqrt(sunny);
//     if(ans == (int)ans)
//     {
//          printf("sunny number");
//     }
//     else
//     {
//         printf("not a sunny number");
//     }
//     return 0;
// }

// 16. program for check number is prime number or not
// #include<stdio.h>
// #include<math.h>
// #include<stdbool.h>

// bool CheckPrine(int value){
//     if(value<=0){
//         return false;
//     }
//     int square = sqrt(value);
//     int i = 2;
//     while(i<=square){
//         if(value%i==0)
//         {
//             return false;
//         }
//         i++;
//     }
//     return true;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(CheckPrine(n)){
//         printf("%d is prime number",n);
//     }
//     else{
//         printf("%d is not a prime number",n);
//     }
//     return 0;
// }

// same code using for loop 

// #include<stdio.h>
// #include<math.h>
// #include<stdbool.h>

// bool CheckPrine(int value){
//     if(value<=0){
//         return false;
//     }
//     int square = sqrt(value);
//     int i = 2;
//     for(i;i<=square;i++){
//         if(value%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(CheckPrine(n)){
//         printf("%d is prime number",n);
//     }
//     else{
//         printf("%d is not a prime number",n);
//     }
//     return 0;
// }

// same code without any additional function 
// #include <stdio.h>
// #include<math.h>

// int main() {
//     int n;
//     scanf("%d",&n);
//     if(n<=1){
//         printf("not prime");
//     }
//     else{
//         int square = sqrt(n);
//         int i = 2, flag = 0;
//         while(i<=square)
//         {
//             if(n%i==0){
//                 printf("not ptime ");
//                 flag = 1;
//                 break;
//             }
//             i++;
//         }
//         if(flag==0){
//             printf("prime number");
//         }
//     }
//     return 0;
// }

// 17.fibonacciseries program

// #include <stdio.h>

// void fibnakiiseries(int n) {
//     if (n == 0) {
//         printf("0\n");
//     } else if (n == 1) {
//         printf("0 1\n");
//     } else {
//         int a = 0;
//         int b = 1;
//         printf("0 1 "); // Print the first two numbers
//         n = n - 2;
//         while (n) {
//             int c = a + b;
//             printf("%d ", c);
//             a = b;
//             b = c;
//             n = n - 1;
//         }
//         printf("\n"); // Move to the next line after printing the series
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     fibnakiiseries(n);
//     return 0;
// }
