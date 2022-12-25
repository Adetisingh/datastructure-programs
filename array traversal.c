#include<stdio.h>
main()
{
 int a[50],size,i;
 printf("enter size of array");
 scanf("%d",&size);
 printf("enter elements in array");
 for(i=0;i<size;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("the required array is:");
 for(i=0;i<size;i++)
 {
 printf("%d",a[i]);
 }
}
