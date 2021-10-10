#include <stdio.h>
#include <string.h>

int main()
{
    char *ptr = "this is mine.";
    char new[50];
    printf("String in ptr array is : %s \n", ptr);
    strcpy(new, ptr);
    printf("You should not be over confident, now %s \n", new);
    return 0;
}