#include <stdio.h>]
struct queue{
int front;
int rear;
unsigned int capacity;
int *arr;
};
struct queue * create_queue(unsigned int cap){
struct queue*q=malloc(sizeof(struct queue));
q->capacity=cap;
q->front=-1;
q->rear=-1;
q->arr=malloc(sizeof(int)*cap);
};
void enqueue(struct queue*q,int data){
if(q->rear==q->capacity-1){
    printf("Queue is full\n");
}
else{
    if(q->front==-1){
    q->front=0;
    }
    q->arr[++q->rear]=data;
    }
}
int dequeue(struct queue*q){
if(q->front>q->rear||(q->front==-1&&q->rear==-1)){
    printf("Queue is empty\n");
}
else{
    return q->arr[q->front++];
}}
int peek(struct queue*q){
if(q->front>q->rear||(q->front==-1&&q->rear==-1)){
    printf("Queue is empty\n");
}
else{
    return q->arr[q->front];
}}
void print_queue(struct queue*q){
int i;
for(i=q->front;i<q->rear+1;i++){
    printf("%d ",q->arr[i]);
}
}
int main(void){
struct queue * a=create_queue(10);
enqueue(a,4);
enqueue(a,6);
enqueue(a,4);
enqueue(a,6);
enqueue(a,4);
enqueue(a,6);
enqueue(a,4);
enqueue(a,6);
enqueue(a,4);
enqueue(a,6);
enqueue(a,4);
enqueue(a,6);
dequeue(a);
print_queue(a);
}
