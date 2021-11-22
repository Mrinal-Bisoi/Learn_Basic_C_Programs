// Write a C program to write on a text file putc_demo.txt

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("putc_demo.txt","w");

    fputc('M',ptr);
    fputc('r',ptr);
    fputc('i',ptr);
    fputc('n',ptr);
    fputc('a',ptr);
    fputc('l',ptr);

    fclose(ptr);
    return 0;
}
