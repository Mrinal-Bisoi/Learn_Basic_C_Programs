#include <stdio.h>

int main()
{
    int age;
    int VIPpass = 0;
    printf("Enter your age : ");
    scanf("%d", &age);

    if ((age <= 90) && (age >= 18) || (VIPpass == 1))
    {
        printf("Your age is in between 18 and 90, so you can drive. \n");
    }
    else
    {
        printf("You can not drive. \n");
    }
    return 0;
}