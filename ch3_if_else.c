#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d", &age);

    if (age >= 90)
    {
        printf("Your age is 90 or more, so you can not drive. \n");
    }
    else
    {
        printf("You can drive. \n");
    }
    return 0;
}