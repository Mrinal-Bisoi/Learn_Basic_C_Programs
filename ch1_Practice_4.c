/*
 Q) Write a C program to calculate simple interest for a set of values representing principal, no of years
    and rate of interest.
*/
#include <stdio.h>

int main()
{
    int principal = 50000, years = 3;
    float interestRate = 6.1, simpleInterest;
    simpleInterest = (principal * interestRate * years) / 100;
    printf("The value of simple interest is %.2f .\n", simpleInterest);
    return 0;
}
