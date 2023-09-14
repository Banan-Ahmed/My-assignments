#include <stdio.h>
#include <string.h>
int main(void){
printf("Please enter a string: \n");
char str[100];
gets(str);
printf("Enter the character to look for: ");
char x;
scanf("%c",&x);
printf("%s",str);
int n=0;
int i=0;
while(str[i]!='\0'){
    n++;
    i++;
}
int counter=0,no_of_vowels=0,no_of_consonant=0;
for(i=0;i<n;i++){
    if(str[i]==x){
    counter++;
    }}

    for(i=0;i<n;i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
    no_of_vowels++;

    }
    else if(str[i]>='a'&&str[i]<='z'){
    no_of_consonant++;


    }}
printf("Frequency=%d\n",counter);
printf("Vowels:%d\nConsonants:%d\n",no_of_vowels,no_of_consonant);
}
