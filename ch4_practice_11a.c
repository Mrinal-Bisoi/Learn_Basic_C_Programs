// Q) Write a C program to check whether a given number is prime or not using a while loop. 

#include <stdio.h>

int main()
{
    int num, prime = 1;
    printf("Enter the value of num : ");
    scanf("%d", &num);

    int i = 2;
    while ( i < num)
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }
    
    if (prime == 0)
    {
        printf("%d is not a prime number. \n", num);
    }
    else
    {
        printf("%d is a prime number. \n", num);
    }
    return 0;
}