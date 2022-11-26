#include<stdio.h>           //function to take input from the user
struct employee
{
    int empid;
    char name[20];
    int salary;
};
struct employee input()
{
    struct employee a;
    printf("Enter your Employee ID : ");
    scanf("%d",&a.empid);
    fflush(stdin);
    printf("Enter your Name : ");
    fgets(a.name,20,stdin);
    printf("Enter your salary : ");
    scanf("%d",&a.salary);
    return a;
}
int main()
{
    input();
    return 0;
}
