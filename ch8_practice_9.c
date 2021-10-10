// Q) Write a C program to check whether a given character is present in the string or not.

#include <stdio.h>
#include <string.h>

void occurence(char *str, char ch)
{
    int count = 0;
    for (int i = 0; i <= (strlen(str)); i++)
    {
        if (str[i] == ch)
        {
            count = count + 1;
            break;
        }
    }
    if (count == 1)
        printf("%c is present in the string. \n", ch);
    else
        printf("%c is not present in the string. \n", ch);
}

int main()
{
    char str[50];
    char ch;
    printf("Enter your string : ");
    gets(str);
    printf("Enter the character to check the presence : ");
    scanf("%c", &ch);
    occurence(str, ch);
    return 0;
}