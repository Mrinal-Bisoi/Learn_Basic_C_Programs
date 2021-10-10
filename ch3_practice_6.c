/*
   Q) Write a C program to find greatest of four numbers entered by the user using ternary operator.
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, greatest;
    printf("Enter the 1st number : ");
    scanf("%d", &num1);
    printf("Enter the 2nd number : ");
    scanf("%d", &num2);
    printf("Enter the 3rd number : ");
    scanf("%d", &num3);
    printf("Enter the 4th number : ");
    scanf("%d", &num4);

    greatest = (num1 > num2) ? ((num1 > num3) ? ((num1 > num4) ? num1 : num4) : ((num3 > num4) ? num3 : num4)) : ((num2 > num3) ? ((num2 > num4) ? num2 : num4) : ((num3 > num4) ? num3 : num4));
    printf("The greatest number among the four number is %d. \n", greatest);
    return 0;
}