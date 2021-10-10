#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    //a = 11;
    //while (a > 10)        // THESE 2 LINES OF CODE EXECUTE THE WHOLE WHILE LOOP INFINITELY.
    while (a < 10)
    {
        printf("%d \n", a);
        a++;
    }
    return 0;
}