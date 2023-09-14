#include <stdio.h>
int main(void){
printf("7.Write a C program to enter length in centimeter and convert it into meter and kilometer.\n8.Write a C program to enter temperature in Celsius and convert it into Fahrenheit.\n9.Write a C program to enter temperature in Fahrenheit and convert to Celsius\n10.Write a C program to convert days into years, weeks and days.\n");
float cm;
float C;
float F;
int d;
int w;
int y;
printf("Please enter cm: ");
scanf("%f",&cm);
printf("in km:%.3f km\nin m:%.3f m\n",cm/100000,cm/100);
printf("Please enter temperature in Celsius: ");
scanf("%f",&C);
printf("\nin F:%.3f F",1.8*C+32);
printf("\nPlease enter temperature in Fahrenheit: \n");
scanf("%f",&F);
printf("in F:%.3f F\n",((F-32)*5)/9);
printf("Please enter days: ");
scanf("%d",&d);
y=d/365;
w=(d%365)/7;
d=(d%365)%7;
printf("\nYears: %d\nWeeks: %d\nDays: %d\n",y,w,d);

}
