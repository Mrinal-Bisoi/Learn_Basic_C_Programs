#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    (a < 5)?printf("a is less than 5. \n") : printf("a is not less than 5. \n");
    return 0;
}