// Q) Write a C program to calculate area of a rectangle using inputs supplied by the user

#include <stdio.h>

int main()
{
    int length, breadth;
    printf("Enter the value of length in rectangle : \n");
    scanf("%d", &length);
    printf("Enter the value of breadth in rectangle : \n");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("The area of rectangle is %d .\n", area);
    return 0;
}