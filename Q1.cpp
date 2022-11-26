#include<stdio.h>           //defining a structure
struct employee
{
    int empid;
    char name[20];
    int salary;
};
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
    return 0;
}
