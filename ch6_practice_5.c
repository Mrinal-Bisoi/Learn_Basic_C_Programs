/*
   Q) Write a C program to print the value of a variable i by using "pointer to pointer" type of variable.
*/

#include<stdio.h>

int main()
{
    int i = 3;
    int *ptr = &i;
    int **ptr_ptr = &ptr;
    printf("The value of i is : %d \n",**ptr_ptr);
    return 0;
}