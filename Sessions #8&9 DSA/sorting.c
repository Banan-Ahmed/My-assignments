#include <stdio.h>
int size;
void swap(int *x,int *y){
int temp=*x;
*x=*y;
*y=temp;
}
int bubble_sort(int arr[]){
    int i,j,flag;
    for(i=0;i<size-1;i++){
        flag=0;
    for(j=0;j<size-1-i;j++){
    if(arr[j]>arr[j+1]){
    swap(&arr[j],&arr[j+1]);
    flag=1;
    }
    }
    if(flag==0){
    break;
    }
    }

return arr;
}
int main(void){
    int s;
    size=10;
int a[10]={10,9,8,7,6,5,4,3,2,1};
bubble_sort(a);
for(s=0;s<size;s++){
    printf("%d ",a[s]);
    }
return 0;
}
