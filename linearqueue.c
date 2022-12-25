#include<stdio.h>
#include<stdlib.h>
#define size 50
void insert();
void display();
void delete();
typedef struct Q
{
    int arr[size];
    int f;
    int r;
}queue_type;
void insert()
{
int ele,r,f,arr[size];
if(f==0 && r=size-1)
printf("Overflow");
else
{
if(f==-1 && r==-1)
{
f=0;
r=0;
}
else{
r++;
arr[r]=ele;
}
}
void delete()
{
int temp;
if(f==-1&&r==-1)
{
printf("Underflow");
return;
}
temp=arr[f];
if(f==r)
{
f==-1;
r==-1;
}
else
{
f++;
return temp;
}
}
void display()
{
int i;
if(f==-1)
printf("empty queue");
else
{
printf("Queue is:");
for(i=f;i<=r;i++)
{
printf("%d ",queue_arr[i]);
printf("n");
}
}

