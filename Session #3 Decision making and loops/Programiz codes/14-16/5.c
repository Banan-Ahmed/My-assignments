#include <stdio.h>
#include <math.h>
int main(void)
{ printf("Print A-Z,Number of digits,Reverse\n");
      int i;
    for( i=65; i<=90; i++)
    {
        printf("%c, ",i);
    }
    printf("\nPlease enter an integer: \n");
    int x;
    scanf("%d",&x);
    int counter=0;
    int s=1;
    int y;
    int r=x;
    while(r>0)
    {
        y=r%((int)pow(10,s));
        r=r-y;
        s++;
        counter++;
    }
    printf("Counter= %d\n",counter);
    int n;
    int a=counter;
    int newn=0;
    while(counter>0)
    {
        n=x%10;
        newn+=(int)n*pow(10,(int)counter-1);
        x/=10;
        counter--;
    }
    printf("Reversed=%d",newn);
}
