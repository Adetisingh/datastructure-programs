#include<stdio.h>
main()
{
    int a[100],i,n,p,s,t;
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(p=0;p<n-1;p++)
    {
       for(s=0;s<n-p-1;s++)
       {
           if(a[s]>a[s+1])
           {
               t=a[s];
               a[s]=a[s+1];
               a[s+1]=t;
           }
       }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
