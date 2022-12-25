#include<stdio.h>
main()
{
    int m, n, a, b, p[10][10], q[10][10], sum[10][10];
    printf("Enter  number of rows and columns of matrix");
    scanf("%d%d", & m, & n);
    printf("Enter the elements of first matrix");
    for (a = 0; a < m; a++)
    {
    for (b = 0; b< n; b++)
    {
    scanf("%d", & p[a][b]);
    }
    }
    printf("Enter the elements of second matrix");
    for (a = 0; a < m; a++)
    {
    for (b = 0; b< n; b++)
    {
    scanf("%d", &q[a][b]);
    }
    }
    for (a= 0; a < m; a++)
    {
    for (b= 0; b < n; b++)
    {
    sum[a][b] = p[a][b] + q[a][b];
    printf("%d", sum[a][b]);
    }
    }
}
