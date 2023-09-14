#include <stdio.h>
int main(void){
printf("17.C Program to Calculate the Power of a Number\n18.C Program to Check Whether a Number is Palindrome or Not\n19.C Program to Check Whether a Number is Prime or Not\n20.C Program to Display Prime Numbers Between Two Intervals\n");
int x,y,result=1;
printf("Please enter the base then the exponent: \n");
scanf("%d%d",&x,&y);
while((y)!=0){
    result*=x;
    y--;
}
printf("ans=%d\n",result);
int z;
printf("Please enter a number: \n");
scanf("%d",&z);
int s=z;
int r,rev=0;
while(s!=0){
    r=s%10;
    rev=rev*10+r;
    s/=10;
}
if(rev==z){
    printf("Palindrome\n");}
    else{
    printf("Not a palindrome\n");
    }
int flag=0;
int a;
printf("Please enter a number: \n");
scanf("%d",&a);
int i=2;
while(i<a){
    if(a%i==0){
    flag=1;}
    i++;

}
if(flag){
    printf("Not prime\n");

}
else{
    printf("Prime\n");
}
int c,d;
printf("Please enter the two intervals: \n");
scanf("%d%d",&c,&d);
flag=0;
i=2;
while(c<d){
  for(i=2;i<c;i++){
     if (c % i == 0) {
            flag = 1;
            break;}

}
 if(flag==0){
    printf("%d ",c);
           }
flag=0;
c++;
}
}
