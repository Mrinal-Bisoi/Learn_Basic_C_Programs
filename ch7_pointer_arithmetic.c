#include <stdio.h>

int main()
{
    int a = 25;
    int *ptr = &a;

    char c = 'M';
    char *cPtr = &c;

    float x = 9.5;
    float *fPtr = &x;

    printf("The value of ptr is %u \n", ptr);
    ptr++;
    printf("The value of ptr is %u \n", ptr);

    printf("The value of cPtr is %u \n", cPtr);
    cPtr++;
    printf("The value of cPtr is %u \n", cPtr);

    printf("The value of fPtr is %u \n", fPtr);
    fPtr++;
    printf("The value of fPtr is %u \n", fPtr);
    
    return 0;
}