// Q) Write a C program to build a structure.

#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[40];
    float salary;
};

int main()
{
    struct employee e1;

    e1.id = 101;
    strcpy(e1.name, "Mrinal Bisoi");
    e1.salary = 1500000.00;

    printf("The id of employee e1 is : %d\n", e1.id);
    printf("The name of employee e1 is : %s\n", e1.name);
    printf("The salary of employee e1 is : %.2f\n", e1.salary);
    return 0;
}