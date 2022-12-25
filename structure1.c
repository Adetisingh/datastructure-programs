#include<stdio.h>
struct student{
        char name[30];
        int roll;
        float marks;

}s;
main()
{
    int i;
    float su=0.0;
    float percen;
    printf("enter the details of the student");
    printf("enter the name");
    gets(s.name);
    printf("enter the roll no");
    scanf("%d",&s.roll);
    printf("enter the marks of students in 6 subjects");
    for(i=0;i<6;i++)
    {
        scanf("%f",&s.marks);
        su+=s.marks;
    }
    percen=((su/600)*100);
    printf("%f",percen);
    if (percen>=95)
    {
        printf("eligible");
    }
    else{
        printf("not eligible");
    }


}
