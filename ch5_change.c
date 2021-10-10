#include <stdio.h>

void change(int b);

int main()
{
    int a = 22;
    printf("The value of a before change is %d \n", a);
    change(a);
    printf("The value of a after change is %d \n", a);
    return 0;
}

void change(int b)
{
    b = 77;
}