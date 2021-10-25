#include<stdio.h>
#include<string.h>

typedef struct student
{
    long long roll;     //The value of roll no is high so we use long long data type to avoid data overflow.
    char name[10];
    float CGPA;
}stu;


int main(){
    stu s1;
    stu *ptr;
    ptr = &s1;

    (*ptr).roll = 11200114027;
    strcpy((*ptr).name, "Mrinal");
    (*ptr).CGPA = 7.81;
    // To print the values of structure s1;
    printf("The roll no of the student s1 is : %lld \n", s1.roll);  // Type specifier  for long long is %lld
    printf("The name of the student s1 is : %s \n", s1.name);
    printf("The Obtained of the student s1 is : %.2f \n", s1.CGPA);

    ptr->roll = 11200114027;
    strcpy(ptr->name, "Mrinal");
    ptr->CGPA = 7.81;
    // To print the values of structure s1;
    printf("The roll no of the student s1 is : %lld \n", s1.roll);  // Type specifier  for long long is %lld
    printf("The name of the student s1 is : %s \n", s1.name);
    printf("The Obtained of the student s1 is : %.2f \n", s1.CGPA);
    return 0;
}