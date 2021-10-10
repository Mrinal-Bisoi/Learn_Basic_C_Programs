// Q) What data type will 3.0/8-2 return?

#include<stdio.h>

int main()
{
    printf("The expression 3.0/8-2 will return %f \n",3.0/8-2);
    // In between int and float decimal point return float,
    // but in general these decimal values return double data type.
    return 0;
}