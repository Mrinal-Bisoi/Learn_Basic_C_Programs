// Q) Explain step by step evaluation of  3*x/y-z+k  where  x = 2, y = 3, z = 3, k = 1.

#include<stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 3 * 2 / 3 - 3 + 1
    // 6 /3 - 3 + 1
    // 2 -3 + 1
    // 0
    printf("The result of expression is %d \n", result);
    return 0;
}