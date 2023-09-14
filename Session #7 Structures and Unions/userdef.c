#include <stdio.h>
#include <string.h>
struct student{
char name[50];
char major[20];
int age;
float gpa;
}s;
struct distance{
float feet;
float inch;
}d1,d2,sum;
struct complexx{
float real;
float imag;
}c1,c2,add;
int main(void){
struct student s={"Banan Ahmed","Engineering",19,3.95};
printf("name:%s\nmajor:%s\nage:%d\ngpa:%.2f\n",s.name,s.major,s.age,s.gpa);
printf("Please enter distance 1 in feet then in inch: ");
scanf("%f",&d1.feet);
printf("Please enter distance 1 in feet then in inch: ");

scanf(" %f",&d1.inch);
printf("Please enter distance 2 in feet then in inch: ");
scanf(" %f",&d2.feet);
printf("Please enter distance 1 in feet then in inch: ");

scanf(" %f",&d2.inch);
sum.feet=d1.feet+d2.feet;
sum.inch=d1.inch+d2.inch;
printf("sum=%.2f  %.2f\n",sum.feet,sum.inch);


printf("Please enter real 1: ");
scanf("%f",&c1.real);
printf("Please enter imaginary 1: ");

scanf(" %f",&c1.imag);
printf("Please enter real 2: ");
scanf(" %f",&c2.real);
printf("Please enter imaginary 2: ");

scanf(" %f",&c2.imag);
add.real=c1.real+c2.real;
add.imag=c1.imag+c2.imag;
printf("sum=%.2f  %.2f\n",add.real,add.imag);
}
