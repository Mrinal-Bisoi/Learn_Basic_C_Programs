// Write a C program to read the whole context of the text file getc_demo.txt 

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("getc_demo.txt","r");

    char ch = fgetc(ptr);
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(ptr);
    }
    return 0;
}
