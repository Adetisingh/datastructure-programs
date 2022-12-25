#include<stdio.h>
main()
{
int a[100][100],i,j,m,n;
printf("Enter number of rows in matrix ");
scanf("%d",&m);
printf("Enter number of columns in matrix");
scanf("%d",&n);
printf("enter elements in matrix");
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(i!=j)
        {
            a[i][j]=a[j][i];
        }
    }
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("%d",a[i][j]);
}
