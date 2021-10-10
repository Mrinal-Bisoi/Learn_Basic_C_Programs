#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a = 4, b = 3;
    printf("The value of a and b before function calling is : %d  %d .\n", a, b);
    printf("The value of 4 + 3 is : %d .\n", sum(a, b));
    printf("The value of a and b after function calling is : %d  %d .\n", a, b);
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 1010;
    b = 505;
    return c;
}