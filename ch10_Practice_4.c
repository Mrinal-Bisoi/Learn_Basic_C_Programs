// Write a C program to take name and salary of 2 employees as input from the user and write them to a text file in the following format
// name1, salary1
// name2, salary2

#include<stdio.h>

struct emp
{
    char name[20];
    long salary;
};


int main(){
    FILE *ptr;
    int n;
    ptr = fopen("pr4.txt", "w");
    
    struct  emp e1;
    printf("Enter the name of the employee1 : ");
    scanf("%s", &e1.name);
    printf("Enter the salary of the employee1 : ");
    scanf("%ld", &e1.salary);
    
    struct  emp e2;
    printf("Enter the name of the employee2 : ");
    scanf("%s", &e2.name);
    printf("Enter the salary of the employee2 : ");
    scanf("%ld", &e2.salary);

    fprintf(ptr, "%s, %ld \n", e1.name, e1.salary);
    fprintf(ptr, "%s, %ld \n", e2.name, e2.salary);
    
    fclose(ptr);
    printf("Successfully print the employee names and salaries in pr4.txt file");
    return 0;
}