// Q) Write a C program to take the multi word string as user input.

#include<stdio.h>

int main(){
    char mulstr[30];
    printf("Enter a multi word string : ");
    gets(mulstr);
    printf("The string is : %s \n", mulstr);
    return 0;
}