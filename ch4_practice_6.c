// Q) Write a C program to sum first ten natural numbers using for loop and do-while loop.

#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("The sum of first ten natural number using for loop is %d \n", sum);

    sum = 0;
    i = 1;
    do{
        sum = sum + i;
        i++;       
    }while(i<=10);
    printf("The sum of first ten natural number using do-while loop is %d \n", sum);

    return 0;
}