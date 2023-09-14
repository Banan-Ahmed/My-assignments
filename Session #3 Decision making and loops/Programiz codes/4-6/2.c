#include <stdio.h>
#include <math.h>
int main(void){
printf("4.C Program to Find the Roots of a Quadratic Equation\n5.C Program to Check Leap Year\n6.C Program to Check Whether a Number is Positive or Negative\n");
int a,b,c;
printf("Please enter the equation coefficients: \n");
scanf("%d%d%d",&a,&b,&c);
float d=(-b+sqrt((b*b)-4*a*c))/2*a;
float e=(-b-sqrt((b*b)-4*a*c))/2*a;
printf("First root: %f\nSecond root: %f\n",d,e);
int x;
printf("Please enter a year: ");
    scanf("%d",&x);
    if(x%100==0&&x%400!=0){
    printf("Not a leap year\n");
    }
    else if(x%4==0)
    printf("Leap year\n");
    else{
    printf("Not a leap year\n");
    }
float y;
printf("Please enter a number: \n");
scanf("%f",&y);
if(y==0){
    printf("Neither positive nor negative");
}
else if(y<0){
    printf("Negative");
}
else if(y>0){
    printf("Positive");
}
}
