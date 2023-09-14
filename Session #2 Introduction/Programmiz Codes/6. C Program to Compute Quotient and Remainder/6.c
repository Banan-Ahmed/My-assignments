#include <stdio.h>
int main(void){
	int x;
	int y;
	printf("Please enter the first number: ");
	scanf("%int",&x);
	printf("Please enter the second number: ");
	scanf("%int",&y);
	printf("The quotient is: %d \n",x/y);
	printf("The remainder is: %d",x%y);
}