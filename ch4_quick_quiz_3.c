// Q) Write a C program to print first n natural numbers using for loop.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", i + 1);
    }
    return 0;
}