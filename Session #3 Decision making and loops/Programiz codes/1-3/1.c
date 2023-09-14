#include <stdio.h>
int main(void)
{
    printf("1.C Program to Check Whether a Number is Even or Odd\n2.C Program to Check Whether a Character is a Vowel or Consonant\n3.C Program to Find the Largest Number Among Three Numbers\n");
    int x;
    printf("Please enter a number: \n");
    scanf("%d",&x);
    if(x%2==0)
        printf("You entered an even number\n");
    else
        printf("You entered an odd number\n");
    char y;
    printf("Please enter a character: \n");
    scanf(" %c",&y);
    if((y>=0&&y<=64)||(y>=91&&y<97))
    {
        printf("Not a letter\n");
    }
    else if(y==65||y==69||y==73||y==79||y==85||y==97||y==101||y==105||y==111||y==117)
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
    int a,b,c;
    printf("Please enter 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    {
        printf("%d is the max",a);
    }
    else if(b>=a&&b>=c)
    {
        printf("%d is the max",b);
    }
    else
    {
        printf("%d is the max",c);
    }
}

