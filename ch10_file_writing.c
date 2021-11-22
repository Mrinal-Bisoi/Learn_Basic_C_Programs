// Q) Write a C program to write on a text file(generated.txt) and then close the file.

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("generated.txt","w");
    int age = 25;
    // fprintf function is used to print something on the file.
    fprintf(ptr, "Hello !!! My name is Mrinal Bisoi and my age is %d.", age);
    fclose(ptr);
    return 0;
}