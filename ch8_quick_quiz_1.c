// Q) Write a C program to create a string using "" and print it's content using a loop.

#include<stdio.h>

int main()
{
    char str[] = "You are awesome!!!";
    char *ptr = str;
    while(*ptr != '\0'){
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}