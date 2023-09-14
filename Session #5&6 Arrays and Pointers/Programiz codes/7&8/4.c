#include <stdio.h>
void cyclic(int*x,int*y,int*z){
int temp;
temp=*y;
*y=*x;
*x=*z;
*z=temp;
}
int main(void){
int arr[7];
int i;
for(i=0;i<7;i++){
    printf("Enter the array elements: ");
    scanf("%d",&arr[i]);
}
for(i=0;i<7;i++){
    printf("%d ",*(arr+i));
}
int x=5,y=7,z=9;
cyclic(&x,&y,&z);
printf("x=%d y=%d z=%d\n",x,y,z);
}
