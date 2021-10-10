#include <stdio.h>

int main()
{
    int i = 22;
    // In the case of do-while loop first execute the do part then check the condition 
    // if the condition is True then it run again continuously untill the condition became False
    // or if the condition is False then it execute from the loop. 
    // That's happend in the next few lines of code.
    do
    {
        printf("The value of i is : %d \n", i);
        i++;
    } while (i < 10);

    int x = 5;
    do
    {
        printf("The value of x is : %d \n", x);
        x++;
    } while (x < 10);
    return 0;
}