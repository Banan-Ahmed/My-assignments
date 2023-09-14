#include <stdio.h>
int prime_No(int x){
    int flag=0;
    int i=2;
while(i<x){
    if(x%i==0){
    flag=1;
    }
    i++;
}
if(flag){
    printf("Not a prime number\n");
    return 0;
}
else{
    printf("prime number\n");
    return 1;
}
}
int prime_No1(int x){
    int flag=0;
    int i=2;
while(i<x){
    if(x%i==0){
    flag=1;
    }
    i++;
}
if(flag){
    //printf("Not a prime number\n");
    return 0;
}
else{
    //printf("prime number\n");
    return 1;
}
}
int armstrong(int x){
int s=x;
int sum=0;
int a;
while(x>0){
    a=x%10;
    sum=sum+(a*a*a);
    x/=10;
}
if(sum==s){
    printf("Armstrong Number\n");
}
else{
    printf("Not an armstrong number\n");
}
}
void prime(int c,int d){
    int flag,i;
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
printf("\n");}
int main(void){
printf("1.C Program to Demonstrate the Working of Keyword long\n2.C Program to Display Prime Numbers Between Intervals Using Function\n3.C Program to Check Prime or Armstrong Number Using User-defined Function\n4.C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers\n");
int x;
long  y;
long long a;
double b;
long double c;
printf("Size of int:%d\n",sizeof(x));
printf("Size of long int:%d\n",sizeof(y));
printf("Size of long long int:%d\n",sizeof(a));
printf("Size of double:%d\n",sizeof(b));
printf("Size of long double:%d\n",sizeof(c));
int e,f;
printf("Please enter the two intervals: \n");
scanf("%d%d",&e,&f);
prime(e,f);
int s;
printf("Please enter a number: \n");
scanf("%d",&s);
prime_No(s);
armstrong(s);
int h;
printf("Please enter a number: \n" );
scanf("%d",&h);
int flag=0;
int j;
for(j=2;j<h;j++){
    if(prime_No1(j)==1){
    if(prime_No1(h-j)==1){
    printf("%d = %d + %d\n", h, j, h - j);
        flag = 1;
    }
    }
}
if(flag==0){
    printf("Cannot be expressed as sum of 2 prime numbers\n");
}
}
