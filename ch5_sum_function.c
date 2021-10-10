#include <stdio.h>

int sum(int a, int b);

int main()
{
    int result;
    result = sum(5, 2);
    printf("The value of sum is %d \n", result);
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}