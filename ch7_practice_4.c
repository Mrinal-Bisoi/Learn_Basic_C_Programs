// Q) Write a C program to create an array of 10 integers and store multiplication table of user input(n) in it.

#include <stdio.h>

int main()
{
    int n, mul[10];

    printf("Enter the number for it's multiplication table : ");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        mul[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d \n", n, i + 1, mul[i]);
    }
    return 0;
}