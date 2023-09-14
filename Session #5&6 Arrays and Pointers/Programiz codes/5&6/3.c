#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    do
    {
        printf("Please enter the matrices dimensions:\n");
        scanf("%d%d%d%d",&a,&b,&c,&d);
    }
    while(b!=c);
    int mat1[a][b];
    int mat2[c][d];
    int i;
    int j;
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf ("Please enter the elements of the first matrix:");
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0; i<c; i++)
    {
        for(j=0; j<d; j++)
        {
            printf ("Please enter the elements of the second matrix:");
            scanf("%d",&mat2[i][j]);
        }
    }
    int sum;
    int k;
    int result[a][d];
    for ( i = 0; i < a; ++i)
    {
        for ( j = 0; j < d; ++j)
        {
            result[i][j] = 0;
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<d; j++)
        {
            for(k=0; k<b; k++)
            {
                result[i][j]+=(mat1[i][k]*mat2[k][j]);
            }
        }
    }
    for ( i = 0; i < a; ++i)
    {
        for ( j = 0; j < d; ++j)
        {
            printf("%d ",result[i][j]);
        }}
        printf("\n");
        int mat3[a][b];
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                printf ("Please enter the elements of the matrix:");
                scanf("%d",&mat3[i][j]);
            }
        }
        int transpose[b][a];
        for(i=0; i<a; i++)
        {
            for(j=0; j<b; j++)
            {
                printf("%d ",mat3[i][j]);
                transpose[j][i]=mat3[i][j];
            }
            printf("\n");
        }
        for(i=0; i<b; i++)
        {
            for(j=0; j<a; j++)
            {
                printf("%d ",transpose[i][j]);
            }
            printf("\n");
        }
}
