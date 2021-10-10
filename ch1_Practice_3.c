// Q) Write a C program to convert Celsius tempareture into Fahrenheit.

#include <stdio.h>

int main()
{
    float celsius = 37, far;
    far = (celsius * 9 / 5) + 32;
    printf("The value of this %.2f Celsius tempareture in Fahrenheit is %.2f. \n", celsius, far);
    return 0;
}