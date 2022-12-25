#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
}*f,*r;
void initialize()
{
f=r=NULL;
}
int Queue() {
struct node*temp=f;
int n=0;
if(f==NULL&&r==NULL)
return 0;
while(temp!=r)
{
n++;
temp=temp->next;
}
if(temp==r)
n++;
return n;
}
int Front()
{
return f->data;
}
int rear()
{
return r->data;
}
void Empty()
{
if(f== NULL&&r==NULL)
printf("empty queue\n");
else
printf("not empty\n");
}
void enqueue()
 {
int num;
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=num;
temp->next=NULL;
if(r==NULL)
{
f=r=temp;
}
else
{
r->next=temp;
r=temp;
}
}
void dequeue()
{
struct node *temp;
if(f==NULL)
{
printf("\nQueue is Empty \n");
return;
}
else
{
temp=f;
f=f->next;
if(f==NULL)
{
r=NULL;
}
printf("Removed Element : %d\n", temp->data);
free(temp);
}
}
void printQueue() {
struct node*temp=f;
if((f==NULL)&&(r==NULL))
{
printf("Queue is Empty\n");
return;
}
while(temp!=NULL)
{
printf("%d", temp->data);
temp=temp->next;
if(temp!=NULL)
printf("-->");
}
}
int main()
{
initialize();
enqueue(1);
enqueue(3);
enqueue(7);
enqueue(5);
enqueue(10);
printQueue();
printf("\nSize of Queue : %d\n",Queue());
printf("Front Element : %d\n",Front());
printf("Rear Element : %d\n",rear());
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
dequeue();
return 0;
}
