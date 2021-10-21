#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    int id;
    char name[10];
    float salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    //ptr = (struct employee*) malloc(sizeof(struct employee));

    ptr -> id = 101;
    ++ptr;
    ptr -> name[10] = "Mrinal";
    ++ptr;
    ptr -> salary = 1500000.50;
    printf("The id of the employee e1 is : %d \n", e1.id);
    printf("The name of the employee e1 is : %s \n", e1.name);
    printf("The salary of the employee e1 is : %.2f \n", e1.salary);
    return 0;
}