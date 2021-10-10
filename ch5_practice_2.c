// Q) Write a C program to convert celsius into fahrenheit using a functions.

#include <stdio.h>

float conTem(float cel);

int main()
{
    float cel, far;
    printf("Enter the tempareture in celsius : ");
    scanf("%f", &cel);
    far = conTem(cel);
    printf("The %.2f celsius converted into  =  %.2f fahrenheit .\n", cel, far);
    return 0;
}

float conTem(float cel)
{
    return ((cel * 9) / 5) + 32;
}