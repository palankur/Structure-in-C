#include<stdio.h>           //taking 10 number of student data input using function
#include<string.h>

struct student
{
    int rollno;
    char name[20];
    int cls;
    char blood;
    char address[40];
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
    fgets(a.address,40,stdin);
    a.address[strlen(a.address)-1]='\0';
    return a;

}

int main()
{
    struct student a[100];
    int i;
    for(i=0;i<10;i++)
    {
        a[i]=input();
    }
    for(i=0;i<10;i++)
    {
        display(a[i]);
    }
    return 0;
}
