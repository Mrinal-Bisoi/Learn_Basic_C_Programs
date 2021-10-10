// Q) Write a C program to count the occurence of a given character in a string.

#include <stdio.h>

void occurence(char *str, char ch)
{
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == ch)
        {
            count++;
        }
        else
        {
            count = count;
        }
        ptr++;
    }
    printf("The occurence of %c in the string is : %d \n", ch, count);
}

int main()
{
    char str[50];
    char ch;
    printf("Enter your string : ");
    gets(str);
    printf("Enter the character to check the occurence : ");
    scanf("%c", &ch);
    occurence(str, ch);
    return 0;
}