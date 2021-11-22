// Write a C program to read a text file character by character and write it's whole content twice in a separate file

#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("pr3a.txt", "r");
    ptr2 = fopen("pr3c.txt", "w");
    char c = fgetc(ptr1);
    while (c != EOF)
    {
        putc(c, ptr2);
        c = fgetc(ptr1);
    }
    rewind(ptr1);
    char d = fgetc(ptr1);
    while (d != EOF)
    {
        putc(d, ptr2);
        d = fgetc(ptr1);
    }
    return 0;
}