/*
   Q) Write a C program to find whether a year entered by the user is a leap year or not.
*/
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);

    if ((year % 100 == 0) && (year % 400 == 0))
    {
        printf("You entered a leap year. \n");
    }
    else if ((year % 100 != 0) && (year % 4 == 0))
    {
        printf("You entered a leap year. \n");
    }
    else
    {
        printf("It is not a leap year. \n");
    }
    return 0;
}