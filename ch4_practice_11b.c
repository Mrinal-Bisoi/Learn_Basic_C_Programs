// Q) Write a C program to check whether a given number is prime or not using a do-while loop. 

#include <stdio.h>

int main()
{
    int num, prime = 1;
    printf("Enter the value of num : ");
    scanf("%d", &num);

    int i = 2;
    do
    {
        if (num % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i < num);

    if (prime == 0 && num != 2)
    {
        printf("%d is not a prime number. \n", num);
    }
    else
    {
        printf("%d is a prime number. \n", num);
    }
    return 0;
}