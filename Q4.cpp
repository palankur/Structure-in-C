#include<stdio.h>           //display function after taking values from the user
#include<string.h>

struct employee
{
    int empid;
    char name[20];
    int salary;
};
void display(struct employee a)
{
    printf("\nEmployee ID is : %d\nYour Name is : %s\nYour Salary is : %d",a.empid,a.name,a.salary);
}
struct employee input()
{
    struct employee a;
    printf("Enter your Employee ID : ");
    scanf("%d",&a.empid);
    fflush(stdin);
    printf("Enter your Name : ");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf("Enter your salary : ");
    scanf("%d",&a.salary);
    return a;

}
void sortBySalary(struct employee a[])
{
    int i,j;
    struct employee temp;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[j].salary>a[j+1].salary)
            {
                temp=a[j];
                a[j+1]=a[j];
            }
        }
    }
}

int main()
{
    struct employee a[10];
    int i;
    for(i=0;i<3;i++)
    {
        a[i]=input();
    }
    sortBySalary(a);
    for(i=0;i<3;i++)
    {
       display(a[i]);
   }
    return 0;
}
