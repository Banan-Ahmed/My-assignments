#include <stdio.h>
int main(void)
{
    printf("8.C Program to Calculate the Sum of Natural Numbers\n9.C Program to Find Factorial of a Number\n10.C Program to Generate Multiplication Table\n");
    int x;
    printf("Please enter a number: \n");
    scanf("%d",&x);
    int i=0;
    int result=0;
    while(i<=x)
    {
        result+=i;
        i++;
    }
    printf("Result= %d\n",result);
    result=1;
    i=x;
    while(i>0){
    result*=i;
    i--;
    }
    printf("Result= %d\n",result);
    int n;
    for( n=1;n<11;n++){
    printf("%d\n",x*n);
    }
}
