#include <stdio.h>
int main(void){
	int x;
	int y;
	int temp;
	printf("Please enter the first number: ");
	scanf("%int",&x);
	printf("Please enter the second number: ");
	scanf("%int",&y);
	temp=x;
	x=y;
	y=temp;
	printf("x= %d \n y= %d",x,y);
	
}