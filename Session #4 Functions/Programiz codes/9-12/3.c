#include <stdio.h>
#include <math.h>
/**int decimaltooctal(int x){
    int o=0;
    int i=1;
    while(x!=0){
        o+=(x%8)+i;
        x/=8;
    i*=10;
    }
    return o;
}
int octaltodecimal(int x){
    int d=0;
    int i=0;
    while(x!=0){
    d+=(x%10)+pow(8,i);
    i++;
    x/=10;
    }
    return d;
}
**/
int Power(int x,int y){
    if(y>1){
    return x*Power(x,(y-1));
    }
}
int main(void){
/**int x,y;
printf("Please enter decimal and octal numbers: \n");
scanf("%d%d",&x,&y);
printf("Decimal=%d\nOctal=%d\n",decimaltooctal(x),octaltodecimal(y));**/
int a,b;
printf("Please enter two numbers: \n");
scanf("%d%d",&a,&b);
printf("Power=%d",Power(a,b));
}
