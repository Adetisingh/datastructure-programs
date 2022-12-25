#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*l;
struct node*r;
};
struct node*createnode(int value){
struct node*p=(struct node*)malloc(sizeof(struct node));
p->data=value;
p->l=NULL;
p->r=NULL;
return p;
}
preorder(struct node*n1){
if(n1!=NULL){
    printf("%d",n1->data);
    preorder(n1->l);
    preorder(n1->r);
}
}
postorder(struct node*n1){
if(n1!=NULL){
    postorder(n1->l);
    postorder(n1->r);
    printf("%d",n1->data);
}
}
inorder(struct node*n1){

if(n1!=NULL){
    inorder(n1->l);
    printf("%d",n1->data);
    inorder(n1->r);
}
}
main()
{
    struct node*n1=createnode(10);
    struct node*n2=createnode(20);
    struct node*n3=createnode(30);
    struct node*n4=createnode(40);
    n1->l=n2;
    n1->r=n3;
    n2->l=n4;
    printf("preorder is:");
    preorder(n1);
    printf("\npostorder is:");
    postorder(n1);
    printf("\ninorder is:");
    inorder(n1);
}
