/*
   Q) Write a C program to determine whether a character entered by the user is lowercase or not.
*/
#include<stdio.h>

int main()
{
    // 97 - 122 = a -z   ASCII Values
    char ch;
    printf("Enter a charecter : ");
    scanf("%c",&ch);

    if(ch>= 97 && ch <= 122){
        printf("It is a lower case. \n");
    }
    else{
        printf("It is not a lower case. \n");
    }
    return 0;
}