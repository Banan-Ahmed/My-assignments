#include <stdio.h>
#include <math.h>
int main(void){
printf("11.Write a C program to find power of any number x ^ y.\n12.Write a C program to enter any number and calculate its square root.\n");
int x;
int y;
printf("Please enter the base: \n");
scanf("%d",&x);
printf("Please enter the power: \n");
scanf("%d",&y);
printf("%.3f\n",pow((double)x,(double)y));
int z;
printf("Please enter the number to find square root: ");
scanf("%d",&z);
printf("%.4f\n",sqrt((double)(z)));
}
