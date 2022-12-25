#include<stdio.h>
main()
{
int a[10],b[10],c[10],i,j,k,m,n;
printf("enter number of elements in setA");
scanf("%d",&m);
printf("enter elements of setA");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter number of elements in setB");
scanf("%d",&n);
printf("enter elements of set B");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<m;i++)
{
for(j=0;j<k;j++)
{
if(c[j]==a[i])
break;
}
if(j==k)
{
c[k]=a[i];
k++;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<k;j++)
{
if(c[j]==b[i])
break;
}
if(j==k)
{
c[k]=b[i];
k++;
}
}
printf("union of setA and set B:/n");
for(i=0;i<k;i++)
{
printf("%d",c[i]);
}
}
