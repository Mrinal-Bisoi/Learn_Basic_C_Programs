#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 5;
    printf("The value of a + b is %d \n", a + b);
    printf("The value of a - b is %d \n", a - b);
    printf("The value of a * b is %d \n", a * b);
    printf("The value of a / b is %d \n", a / b);

    int z;
    z = a * b; //legal
    //a * b = z;      //illegal
    printf("The value of z is %d \n", z);

    // The output sign follow the sign of the first term in division or dividend
    printf("When 5 is divided by 2 leaves a remender of %d \n", 5 % 2);
    printf("When -5 is divided by 2 leaves a remender of %d \n", -5 % 2);
    printf("When 5 is divided by -2 leaves a remender of %d \n", 5 % -2);

    // There is no exponential operator in C like ^
    // If we want to calculate exponential of any value then we have to use pow() function from math.h library
    // *********** pow() function return double not int, so must use %f instead of %d. *************
    printf("The value of 4 to the power 5 is %f \n", pow(4, 5));

    return 0;
}
