// Q) Write a C program to find average of three numbers using a function.

#include <stdio.h>

float avg(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter three numbers to calculate their average : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The average of %d, %d & %d is %f .\n", a, b, c, avg(a, b, c));
    return 0;
}

float avg(int a, int b, int c)
{
    float avg;
    avg = (float)(a + b + c) / 3;
    return avg;
}