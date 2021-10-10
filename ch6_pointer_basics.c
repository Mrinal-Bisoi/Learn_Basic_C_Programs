#include <stdio.h>

int main()
{
    int i = 25;
    int *j = &i;       // it means j is a address container of a integer type. Here it contain address of i.
    int **k;           // it is a pointer to a pointer means,   
    k = &j;         // it's a container that contains address of a pointer.
    printf("The value of i is : %d \n", i);
    printf("The value of i is : %d \n", *j);
    printf("The value of i is : %d \n", *(&i));
    printf("The address of i is : %u \n", &i);
    printf("The address of i is : %u \n", j);
    printf("The address of j is : %u \n", &j);
    printf("The value at address of j is : %d \n", *(&j));
    printf("The value of k is : %d \n", k);
    printf("The value of j is : %d \n", *k);
    printf("The value of i is : %d \n", **k);
    printf("The value of k is : %d \n", *(&k));
    printf("The address of k is : %u \n",&k);

    return 0;
}