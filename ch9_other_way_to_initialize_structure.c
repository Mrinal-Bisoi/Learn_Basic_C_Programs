// Write a C program to store the data of a employee in another way.

#include<stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[40];
    float salary;
};

int main(){
    struct employee mrinal= {100, "Mrinal", 1500000.50};
    printf("The id of the employee mrinal is : %d \n", mrinal.id);
    printf("The name of the employee mrinal is : %s \n", mrinal.name);
    printf("The salary of the employee mrinal is : %.2f \n", mrinal.salary);
    return 0;
}