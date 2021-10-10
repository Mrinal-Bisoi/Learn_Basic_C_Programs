// Q) Write a C program to print the address of a variable. Use this address to get the value of the variable.

#include <stdio.h>

int main()
{
    int a = 5;
    printf("The address of the variable is %u \n", &a);
    printf("The value of the variable is %d \n", *(&a));
    return 0;
}