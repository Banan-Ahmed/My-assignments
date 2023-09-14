#include <stdio.h>
int main(void)
{
    int arr[100];
    int n,sum=0,i;
    printf("Please enter the number of elements:\n");
    scanf("%d",&n);
    for( i=0; i<n; i++)
    {
        printf("Please enter a number:");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float average=(float)sum/n;
    printf("Average = %.3f\n",average);
    int a[100];
    int s,max=0;
    printf("Please enter the number of elements:");
    scanf("%d",&s);
    for(i=0; i<s; i++)
    {
        printf("Please enter a number:");
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Max=%d\n",max);
}
