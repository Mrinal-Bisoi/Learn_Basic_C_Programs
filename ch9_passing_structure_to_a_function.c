// Q) Passing structure to the show function and complete the show function to display the content of employee.

#include<stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[40];
    float salary;
};

void show(struct employee emp){
    printf("The id of the employee is : %d \n",emp.id);
    printf("The name of the employee is : %s \n",emp.name);
    printf("The salary of the employee is : %.2f \n",emp.salary);
    emp.id = 100;       // It doesn't change the main context this change is just in the copy.
}

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->id = 101;
    strcpy(ptr->name, "Mrinal");
    ptr->salary = 1500000.50;

    show(e1);       // main sends the copy of e1 to the function show() not the main context of e1.
    printf("The id of the employee e1 is : %d \n",e1.id);   // It means struct is using call by value not call by reference.
    return 0;
}