#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node node;
node *top;
void initialize()
{
top=NULL;
}
void push()
{
int val;
node *temp;
temp=malloc(sizeof(node));
temp->data=val;
temp->next=top;
top=temp;
}
void pop()
{
node *temp;
if(top==NULL)
printf("stack is empty\n");
else
{
printf("poped element=%d\n",top->data);
temp=top;
top=top->next;
temp->next=NULL;
free(temp);
return top;
}
}
void printlist()
{
node *temp=top;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("null\n");
}
int Top()
{
return top->data;
}
int empty()
{
return top==NULL;
}
void display(node *head)
{
if(head == NULL);
{
printf("NULL\n");
}
else
{
printf("%d\n", head -> data);
}
}
int main()
{
initialize();
push(10);
push(20);
push(30);
printf("The top is %d\n",Top());
pop();
printf("The top after pop is %d\n",Top());
display(top);
return 0;
}


