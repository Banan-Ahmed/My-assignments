#include <stdio.h>
int main(void){
printf("4.Write a C program to enter length and breadth of a rectangle and find its perimeter.\n5.Write a C program to enter length and breadth of a rectangle and find its area.\n6.Write a C program to enter radius of a circle and find its diameter, circumference and area.\n");
int x;
int y;
printf("Please enter the length:\n");
scanf("%d",&x);
printf("Please enter the width:\n");
scanf("%d",&y);
printf("Perimeter: %d\nArea: %d\n",(2*x)+(2*y),x*y);
int r;
printf("Please enter the radius:\n");
scanf("%d",&r);
printf("Diameter: %d\nCircumference: %f\nArea: %f\n",2*r, 2*3.14*r, 3.14*(r*r));
}
