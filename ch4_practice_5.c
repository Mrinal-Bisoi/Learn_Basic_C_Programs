// Q) Write a C program to sum first ten natural numbers using while loop.

#include<stdio.h>

int main()
{
    int i = 1, sum = 0;
    while(i<=10){
        sum = sum + i;
        i++;
    }
    printf("The sum of first 10 natural number is %d \n",sum);
    return 0;
}