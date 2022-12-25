#include<stdio.h>
main()
{
    int a[100],i,n,j,min;
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            a[min]=a[min]+a[i];
            a[i]=a[min]-a[i];
            a[min]=a[min]-a[i];
        }
    }
for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
