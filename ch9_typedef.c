// Q) Build a structure using typedef keyword then passing structure to the show function
//    and complete the show function to display the content of employee.

#include<stdio.h>
#include <string.h>

// typedef is a keyword to make custom data type.
typedef struct employee
{
    int id;
    char name[40];
    float salary;
}emp;

void show(emp emp1){
    printf("The id of the employee is : %d \n",emp1.id);
    printf("The name of the employee is : %s \n",emp1.name);
    printf("The salary of the employee is : %.2f \n",emp1.salary);
}

int main(){
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->id = 101;
    strcpy(ptr->name, "Mrinal");
    ptr->salary = 1500000.50;

    show(e1);
    return 0;
}