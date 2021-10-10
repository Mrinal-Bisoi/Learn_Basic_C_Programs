/*
   Q) Write a C program to print the following pattern(first n lines) using function :
      *
      ***
      *****
*/

#include<stdio.h>

void printPattern(int n);

int main()
{
    int n;
    printf("Enter the value of n as no of lines : ");
    scanf("%d",&n);
    printPattern(n);
    return 0;
}

void printPattern(int n){
    if(n == 1){
        printf("*\n");
    }
    else{
        printPattern(n-1);
        for(int i = 0; i < (2*n -1); i++){
            printf("*");
        }
        printf("\n");
    }
}