#include <stdio.h>
#include <math.h>
int main(void){
int arr[100];
int n,i,sum=0;
printf("Please enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter a number:");
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
float add=0,s,sd;
float average=(float)sum/n;
for(i=0;i<n;i++){
   s= pow(arr[i]-average,2);
    add+=s;
}
sd=sqrt(add/n);
printf("Standard deviation=%f\n",sd);
int z,m;
printf("Please enter the number of rows:");
scanf("%d",&z);
printf("Please enter the number of column:");
scanf("%d",&m);
int a[z][m];
int b[z][m];
int j;
for(i=0;i<z;i++){
    for(j=0;j<m;j++){
    printf("Please enter elements of the first matrix:");
    scanf("%d",&a[i][j]);
    }
}
for(i=0;i<z;i++){
    for(j=0;j<m;j++){
        printf("Please enter elements of the second matrix:");
    scanf("%d",&b[i][j]);
    }
}
int su[z][m];
for(i=0;i<z;i++){
    for(j=0;j<m;j++){
        su[i][j]=(a[i][j])+(b[i][j]);
    }
}
for(i=0;i<z;i++){
    for(j=0;j<m;j++){

        printf("%d ",su[i][j]);
    }
}
}
