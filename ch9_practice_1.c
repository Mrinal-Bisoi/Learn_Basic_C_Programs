// Q) Write a C program to create a two-dimentional vector using structures.
#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 25;
    v1.y = 23;
    printf("In vector v1, X dim is %d and Y dim is %d \n", v1.x, v1.y);
    v2.x = 15;
    v2.y = 13;
    printf("In vector v2, X dim is %d and Y dim is %d \n", v2.x, v2.y);
    return 0;
}