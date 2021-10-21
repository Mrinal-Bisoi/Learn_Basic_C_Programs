// Q) Write a C program to initialize the value of the structure using pointer.

#include<stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[40];
    float salary;
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    (*ptr).id = 101;
    strcpy((*ptr).name, "Mrinal");
    (*ptr).salary = 1500000.50;
    printf("The id of the employee e1 is : %d \n",e1.id);
    printf("The name of the employee e1 is : %s \n",e1.name);
    printf("The salary of the employee e1 is : %.2f \n",e1.salary);
    return 0;
}