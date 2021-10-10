/* Q)What will be the output of the following pseudo code :-
    int a = 10;
    if (a = 11)
        printf("I am 11. \n");
    else
        printf("I am not 11. \n");
*/
#include <stdio.h>

int main()
{
    int a = 10;
    
    if (a = 11)
    {
        printf("I am 11. \n");
    }
    else
    {
        printf("I am not 11. \n");
    }
    return 0;
}