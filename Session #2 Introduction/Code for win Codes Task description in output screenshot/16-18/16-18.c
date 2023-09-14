#include <stdio.h>
int main(void)
{
    printf("Write a C program to enter marks of five subjects and calculate total, average and percentage. \nWrite a C program to enter P, T, R and calculate Simple Interest. \nWrite a C program to enter P, T, R and calculate Compound Interest. \n");

    float a,b,c,d,e,avg;
    printf("Please enter grades of the 5 subjects: ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("average= %.3f \n",avg);

    float P,T,R,S,C,N;
    printf("Please enter P,T,and R");
    scanf("%f%f%f",&P,&T,&R);
    S=(1+R*T)*P;
    printf("Please enter n: ");
    scanf("%f",&N);
    C=P*pow(1+R/N,N*T);
    printf("Simple= %f  Compound= %f \n",S,C);

}
