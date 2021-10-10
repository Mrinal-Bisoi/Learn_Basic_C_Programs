// Q) Write a function which work same as strcpy function from <string.h>

#include <stdio.h>

void cpystr(char *target, char *source)
{
    char *ptr = source;
    int i = 0;
    while (*ptr != '\0')
    {
        target[i] = source[i];
        i++;
        ptr++;
    }
    target[i] = '\0';
}

int main()
{
    char source[] = "Mrinal Bisoi";
    char target[30];
    cpystr(target, source);
    printf("The string in source array is : %s \n", source);
    printf("The string in target array is : %s \n", target);
    return 0;
}