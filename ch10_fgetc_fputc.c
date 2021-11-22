// Write a C program to read the first character of the text file getc_demo.txt 

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("getc_demo.txt","r");
    char c = fgetc(ptr);
    printf("The value of my character is : %c \n", c);
    fclose(ptr);
    return 0;
}
