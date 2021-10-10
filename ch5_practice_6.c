/*
   Q) Write a recursive function to calculate the sum of first n natural numbers.
*/

#include <stdio.h>

int natSum(int n);

int main()
{
    int n;
    printf("Enter the value of n to calculate the sum of natural nos : ");
    scanf("%d", &n);
    printf("The sum of first %d natural no is %d .\n", n, natSum(n));
    return 0;
}

int natSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + natSum(n - 1);
    }
}