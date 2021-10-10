/*
   Q) Write a C program to change the value of a variable to 10 times of it's current 
      value. Write a function and pass the value by reference.
*/
#include <stdio.h>

void change(int *n)
{
    *n = 10 * (*n);
}

int main()
{
    int n = 7;
    printf("The value of n before pass the rederence is %d \n", n);
    change(&n);
    printf("The value of n after pass the rederence is %d \n", n);
    return 0;
}