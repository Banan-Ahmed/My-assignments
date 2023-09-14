#include <stdio.h>
#include <stdlib.h>
    struct stack{
int top;
unsigned int capacity;
int * arr;
};
    struct stack* create_stack(unsigned int cap){
struct stack* s=malloc(sizeof(struct stack));
s->capacity=cap;
s->top=-1;
s->arr=malloc(sizeof(int)*cap);
return s;
}
    void push(struct stack *s,int data){
if((s->top)==(s->capacity-1)){

printf("Stack is full\n");
}

else{
    s->arr[++s->top]=data;}}
    int pop(struct stack*s){
if(s->top==-1){
printf("Stack is empty\n");
return NULL;}
else{
return s->arr[s->top--];
    }}
   int peek(struct stack*s){
if(s->top==-1){
printf("Stack is empty\n");
return NULL;}
else{
return s->arr[s->top];} }
    int size(struct stack *s){
return (s->top+1);
}

    void print_stack(struct stack*s){
int i;
for(i=0;i<(s->top+1);i++){
    printf("%d ",s->arr[i]);
}
    }

int main(void){
struct stack * a=create_stack(18);
push(a,14);
pop(a);
push(a,12);
peek(a);
push(a,27);
push(a,4);
push(a,7);
pop(a);
print_stack(a);

}
