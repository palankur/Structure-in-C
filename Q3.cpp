#include<stdio.h>           //display function after taking values from the user

struct employee
{
    int empid;
    char name[20];
    int salary;
};
void display(struct employee a)
{
    printf("Employee ID is : %d\nYour Name is : %s\nYour Salary is : %d",a.empid,a.name,a.salary);
}

int main()
{
    struct employee a;
    printf("Enter your Employee ID : ");
    scanf("%d",&a.empid);
    fflush(stdin);
    printf("Enter your Name : ");
    fgets(a.name,20,stdin);
    printf("Enter your salary : ");
    scanf("%d",&a.salary);
    display(a);
    return 0;
}
