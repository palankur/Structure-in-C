#include<stdio.h>           //taking n number of student data input and displaying it using function
#include<string.h>

struct student
{
    int rollno;
    char name[20];
    int cls;
    char address[100];
};
void display(struct student a)
{
    printf("\nRoll Number is : %d\nYour Name is : %s\nYour Class is : %d\nYour address is : %s",a.rollno,a.name,a.cls,a.address);
}
struct student input()
{
    struct student a;
    printf("Enter your Roll No.: ");
    scanf("%d",&a.rollno);
    fflush(stdin);
    printf("Enter your Name : ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf("Enter your class (1-12) : ");
    scanf("%d",&a.cls);
    fflush(stdin);
    printf("Enter your address : ");
    fgets(a.address,100,stdin);
    a.address[strlen(a.address)-1]='\0';
    return a;

}
int main()
{
    struct student a[100];
    int i,size;
    printf("Enter the number of students : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        a[i]=input();
    }
    for(i=0;i<size;i++)
    {
        display(a[i]);
    }
    return 0;
}

