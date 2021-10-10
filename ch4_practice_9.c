// Q) Write a C program to calculate the factorial of a given number using a while loop.

#include <stdio.h>

int main()
{
    int i, n, factorial = 1;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    
    i = n; 
    while(i)
    {
        factorial = factorial * i;
        i--;
    }
    printf("The factorial of %d is = %d \n", n, factorial);
    return 0;
}