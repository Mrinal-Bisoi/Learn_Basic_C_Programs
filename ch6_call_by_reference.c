#include <stdio.h>

void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int a = 3, b = 4;

    printf("The value of a and b before wrong_swap calling is : %d  %d \n", a, b);
    wrong_swap(a, b);       // It will not work due to call by value
    printf("The value of a and b after wrong_swap calling is : %d  %d \n", a, b);

    printf("\n");

    printf("The value of a and b before swap calling is : %d  %d \n", a, b);
    swap(&a, &b);       // It will work due to call by reference
    printf("The value of a and b after swap calling is : %d  %d \n", a, b);

    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}