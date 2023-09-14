#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node*next;
};
typedef struct node n;
struct node*head=NULL;
void insert_node_first(int x){
struct node*a=malloc(sizeof (n));
a->data=x;
a->next=head;
head=a;
}
void insert_node_last(int x){
n*a=malloc(sizeof (n));
n *temp=head;
a->data=x;
a->next=NULL;
if(head==NULL){
    head=a;
    return;
}
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=a;
return;
}
void insertafter(n*a,int data){
if(a==NULL){
    printf("Cannot be null\n");
    return;
}
n*b=malloc(sizeof (n));
b->data=data;
b->next=a->next;
a->next=b;
}
void deletenode(int data){
n*a=head,*prev;
if(a!=NULL&&a->data==data){
    head=a->next;
    free(a);
    return;
}
while(a!=NULL&&a->data!=data){
    prev=a;
    a=a->next;
}
if(a==NULL){
    printf("not found\n");
    return;
}
prev->next=a->next;
free(a);
}
void print(n*a){
while(a!=NULL){
    printf("%d ",a->data);
    a=a->next;
}
}

int main(void){
insert_node_first(5);
insert_node_first(4);
insert_node_first(3);
insert_node_last(12);
insert_node_last(8);
insert_node_first(7);
insertafter(head,5);
deletenode(4);
deletenode(20);

print(head);
}

