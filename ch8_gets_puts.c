#include<stdio.h>

int main()
{
    char full_name[50];
    printf("Enter your full name : ");
    gets(full_name);
    printf("Hey ");
    puts(full_name);
    return 0;
}