// Q) Write a C program to store the details of 3 employee from user defined data.take the employee id, name, salary.

#include<stdio.h>

struct employee
{
    int id;
    char name[40];
    float salary;
};

int main(){
    struct employee e1, e2, e3;
    printf("Enter the employee id for e1 : ");
    scanf("%d",&e1.id);
    printf("Enter the name of e1 : ");
    fflush(stdin);
    scanf("%[^\n]s",e1.name);
    printf("Enter the salary for e1 : ");
    scanf("%f",&e1.salary);

    printf("Enter the employee id for e2 : ");
    scanf("%d",&e2.id);
    printf("Enter the name of e2 : ");
    fflush(stdin);
    scanf("%[^\n]s",e2.name);
    printf("Enter the salary for e2 : ");
    scanf("%f",&e2.salary);

    printf("Enter the employee id for e3 : ");
    scanf("%d",&e3.id);
    printf("Enter the name of e3 : ");
    fflush(stdin);
    scanf("%[^\n]s",e3.name);
    printf("Enter the salary for e3 : ");
    scanf("%f",&e3.salary);
    return 0;
}