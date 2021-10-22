// Q) Write a function sumvector which returns the sum of two vectors passed to it. The vectors must be 2-d.
#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} vec;

vec sumvector(vec v1, vec v2)
{
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    vec v1, v2, sum;
    v1.x = 25;
    v1.y = 23;
    printf("In vector v1, X dim is %d and Y dim is %d \n", v1.x, v1.y);

    v2.x = 15;
    v2.y = 13;
    printf("In vector v2, X dim is %d and Y dim is %d \n", v2.x, v2.y);

    sum = sumvector(v1, v2);
    printf("X dim of result vector is %d and Y dim of result vector is %d \n", sum.x, sum.y);
    return 0;
}