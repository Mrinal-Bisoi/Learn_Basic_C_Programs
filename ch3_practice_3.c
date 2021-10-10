/*
   Q) Write a C program to calculate income tax paid by an employee to the government as per
      the slabs(in lakhs) mention below : 
        INCOME SLAB          TAX
       --------------       ------
         2.5l - 5.0l          5%
         5.0l - 10.0l         20%
         Above 10.0l          30% 
      Note that there is no tax below 2.5l . Take income amount as an input from the user.
*/
#include <stdio.h>

int main()
{
    float income, tax = 0;
    printf("Enter your income : ");
    scanf("%f", &income);

    if (income < 250000)
    {
        printf("You do not need to pay any tax. \n");
    }
    else if ((income >= 250000) && (income < 500000))
    {
        tax = tax + (5 * (income-250000)) / 100;
        printf("You have to pay tax amount %.2f. \n", tax);
    }
    else if ((income >= 500000) && (income < 1000000))
    {
        tax = tax + (20 * (income-250000)) / 100;
        printf("You have to pay tax amount %.2f. \n", tax);
    }
    else if (income >= 1000000)
    {
        tax = tax + (30 * (income-250000)) / 100;
        printf("You have to pay tax amount %.2f. \n", tax);
    }
    return 0;
}