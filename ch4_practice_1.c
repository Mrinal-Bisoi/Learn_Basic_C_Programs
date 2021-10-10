// Q) Write a C program to print multiplication table of a given number n.(Consider n*1 to n*10)

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("The multiplication table of %d is : \n", n);
    printf("****************************************************\n");

    for (int i = 1; i <= 10; i++)
    {
        printf(" %d * %d = %d \n", n, i, (n * i));
    }
    return 0;
}