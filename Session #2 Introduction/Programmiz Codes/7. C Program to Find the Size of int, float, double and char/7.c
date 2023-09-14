#include <stdio.h>
int main(void){
	int x=sizeof(int);
	int y=sizeof(float);
	int z=sizeof(double);
	int a=sizeof(char);
	printf("int:%d bytes\n float:%d bytes\n double:%d bytes \n char:%d bytes ",x, y, z, a);
}