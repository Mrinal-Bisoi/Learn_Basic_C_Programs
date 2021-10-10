// C program to check whether the given number is even or odd

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    if (a != 0)
    {
        if (a % 2 == 0)
        {
            printf("%d is even. \n", a);
        }
        else
        {
            printf("%d is odd. \n", a);
        }
    }
    return 0;
}