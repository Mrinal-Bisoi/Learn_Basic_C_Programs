#include <stdio.h>

int main()
{
    for (int i = 1; i < 1000; i++)
    {
        printf("The value of i is %d \n", i);
        if (i == 5)
        {
            break;
        }
    }

    printf("*********************************************\n");
    int a = 0;
    do
    {
        printf("The value of a is %d \n", a);
        if (a == 5)
        {
            break;
        }
        a++;
    } while (a < 10);
    return 0;
}