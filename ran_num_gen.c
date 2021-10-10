#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    srand(time(0));
    num = rand() % 100 + 1;    // It helps to keep the random number in between 10 to 100 
    printf("The randomly generated number is : %d \n", num);
    return 0;
}