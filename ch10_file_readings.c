// Q) Write a C program to read the content of a text file(NumVal.txt) and print the values of that file. 

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("NumVal.txt", "r");
    int num;
    int num2;
    fscanf(ptr, "%d", &num);        // It will work to take an input, 
    fscanf(ptr, "%d", &num2);       // but instead of keyboard it will read from the file.
    printf("The value of num is : %d \n", num);
    printf("The value of num2 is : %d \n", num2);
    fclose(ptr);        // It's a good practice to close the file after use to work with less resources.
    return 0;
}