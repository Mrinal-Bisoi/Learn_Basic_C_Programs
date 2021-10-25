// Write a C program with a structure representating two complex numbers and adding those two complex numbers.

#include <stdio.h>

typedef struct complex
{
    int real;
    int img;
} cmp;

cmp sumComplex(cmp c1, cmp c2)
{
    cmp c;
    // Adding up two complex numbers
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return c;
}

int main()
{
    cmp c1 = {2, 3}, c2 = {5, 6}, c3;
    c3 = sumComplex(c1, c2);
    printf("Complex number 1 : %d + i%d \n", c1.real, c1.img);
    printf("Complex number 2 : %d + i%d \n", c2.real, c2.img);
    printf("Sum of the Complex numbers : %d + i%d \n", c3.real, c3.img);
    return 0;
}