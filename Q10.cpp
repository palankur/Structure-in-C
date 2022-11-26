#include<stdio.h>           //taking n number of student data and finding the percentage
#include<string.h>

struct marks
{
    int rollno;
    char name[20];
    float chem,phy,maths;
    float p;
};
struct marks input()
{
    struct marks a;
    printf("Enter your Roll No.: ");
    scanf("%d",&a.rollno);
    fflush(stdin);
    printf("Enter your Name : ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf("Enter your Chemistry Marks : ");
    scanf("%f",&a.chem);
    printf("Enter your Mathematics Marks : ");
    scanf("%f",&a.maths);
    printf("Enter your Physics Marks : ");
    scanf("%f",&a.phy);
    return a;

}
int main()
{
    struct marks a[100];
    int i,size;
    float percen;
    printf("Enter the number of students : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        a[i]=input();
    }
    for(i=0;i<size;i++)
    {
        printf("\nPercentage of %s is :  ",a[i].name);
        percen=((a[i].phy+a[i].maths+a[i].chem)/3);
        printf("%f",percen);

    }
    return 0;
}
