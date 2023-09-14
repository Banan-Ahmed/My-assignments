#include <stdio.h>
#include <math.h>
int sum(int x){
if(x!=0){
    return x+sum(x-1);
}}
int factorial(int x){
if(x>1){
    return x*factorial(x-1);
}
}
int gcd(int a,int b){

if(b>0){
    return gcd(b,a%b);
}
else{
    return a;
}
}
int dec(int x){
int r,i=0,no=0;
while(x>0){
    r=x%10;
    no+=r*pow(2,i);
    x/=10;
    i++;
}
return no;
}
int main(void){
printf("5.C Program to Find the Sum of Natural Numbers using Recursion\n6.C Program to Find Factorial of a Number Using Recursion\n7.C Program to Find G.C.D Using Recursion\n8.C Program to Convert Binary Number to Decimal and vice-versa\n");
int n;
printf("Please enter a number: ");
scanf("%d",&n);
printf("Sum=%d\n",sum(n));
printf("Factorial=%d\n",factorial(n));
int a,b;
printf("Please enter two numbers:\n");
scanf("%d%d",&a,&b);
printf("GCD=%d\n",gcd(a,b));
int c;
printf("Please enter a binary number:\n");
scanf("%d",&c);
printf("Decimal conversion= %d\n",dec(c));
}
