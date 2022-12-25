#include<stdio.h>
struct student{
       char name[30];
       int roll;
       float marks;
       int age;
}s;
main()
{
    int i;
    for(i=0;i<5;i++)
    {
       printf("\nenter the name");
       gets(s.name);
       printf("\nenter roll no");
       scanf("%d",&s.roll);
       printf("\nenter the marks");
       scanf("%f",&s.marks);
       printf("\nenter the age");
       scanf("%d",&s.age);
       printf("\nprinting the details");
       printf("\nname is %s",s.name);
       printf("\nmarks is %f",s.marks);
       printf("\nroll no is %d",s.roll);
       printf("\nage is %d",s.age);
    }
}
