#include <stdio.h>
#include <math.h>
int main(void)
{
printf("Write a C program to enter two angles of a triangle and find the third angle.\nWrite a C program to enter base and height of a triangle and find its area.\nWrite a C program to calculate area of an equilateral triangle.\n");


int angle1,angle2,angle3;
printf("Enter the first angle: ");
scanf("%d",&angle1);
printf("Enter the second angle: ");
scanf("%d",&angle2);
angle3=180-angle1-angle2;
printf("3rd angle: %d\n",angle3);


int base, height;
float area;
printf("Please enter the base: ");
scanf("%d",&base);
printf("Please enter the height: ");
scanf("%d",&height);
area=0.5*base*height;
printf("Area: %.3f\n", area);


int side;
float area2;
printf("Please enter the side length: ");
scanf("%d",&side);
area2=(sqrt(3)/4)*(side*side);
printf("Area= %f",area2);

}
