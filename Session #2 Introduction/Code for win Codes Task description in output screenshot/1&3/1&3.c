#include <stdio.h>
int main(void){
printf("1.Write a C program to perform input/output of all basic data types.\n");
int a;
char b;
double c;
float d;
printf("Enter an integer:");
scanf("%d",&a);
printf("int: %d\n",a);
printf("Enter a character:");
scanf(" %c",&b);
printf("char: %c\n",b);
printf("Enter a double:");
scanf("%lf",&c);
printf("double: %f\n",c);
printf("Enter a float:");
scanf("%f",&d);
printf("float: %f\n",d);
printf("3.Write a C program to enter two numbers and perform all arithmetic operations.\n");
int e;25
int f;
printf("Enter the first number: ",e);
scanf("%d",&e);
printf("\n Enter the second number: ",f);
scanf("%d",&f);
printf("sum: %d \ndifference: %d \nproduct: %d \nquotient: %d \nremainder: %d\n",e+f,e-f,e*f,e/f,e%f);}
