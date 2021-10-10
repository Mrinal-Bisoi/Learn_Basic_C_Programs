#include <stdio.h>
#include <string.h>

int main()
{
    char F_N[] = "Mrinal ";
    char L_N[] = "Bisoi";
    strcat(F_N, L_N);
    printf("Your full name is : %s \n", F_N);
    return 0;
}