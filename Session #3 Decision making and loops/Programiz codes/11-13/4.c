#include <stdio.h>
int main(void)
{
    printf("Fibonacci,LCM,GCD\n");
    int x;
    printf("No. of terms: ");
    scanf("%d",&x);
    printf("0\n");
    int y1=0,y2=1,z,i=1;
    while(i<x)
    {
        z=y1+y2;
        y2=y1;
        y1=z;
        printf("%d\n",z);
        i++;
    }
    int a,b;
    int l,n,max;
    printf("Enter 2 no.: \n");
    scanf("%d%d",&a,&b);
    for( l=1; (l<=a)&&(l<=b); l++)
    {
        if(a%l==0&&b%l==0)
        {
            n=l;
        }
    }
    printf("GCD:%d\n",n);
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    while(!(max%a==0&&max%b==0))
    {
        max++;
    }
    printf("LCM:%d\n",max);
}
