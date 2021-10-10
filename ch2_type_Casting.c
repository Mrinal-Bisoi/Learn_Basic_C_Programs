// Arithmetic operation between int and int return int.
// Arithmetic operation between float and int return float.
// Arithmetic operation between float and float return float.

#include <stdio.h>

int main()
{
    printf("The  value of 5 / 2 is %d \n", 5 / 2);
    //printf("The  value of 5.0 / 2 is %d \n", 5.0 / 2);        //-->It's not given answer 2. it's given 0
    printf("The  value of 5.0 / 2 is %f \n", 5.0 / 2);
    printf("The  value of 3.0 / 9.0 is %f \n", 3.0 / 9.0);
    return 0;
}