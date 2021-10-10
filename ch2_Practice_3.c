// Q) Write a C program to check whether a number is divisible by 97 or not?

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number to check the divisibility by 97:\n");
    scanf("%d",&num);
    printf("The result of test (Return 0 if it divisible by 97) = %d \n",num%97);
    return 0;
}
