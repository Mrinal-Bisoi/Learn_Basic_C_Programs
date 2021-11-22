// Write a C program to read three intigers from a file pr1.txt

#include<stdio.h>

int main(){
    int a, b, c;
    FILE *ptr;
    ptr= fopen("pr1.txt","r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The value of a, b and c is : %d %d %d \n", a, b, c);
    return 0;
}