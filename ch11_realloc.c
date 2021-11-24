// Write a C program to create a dynamic array of 6 floats using calloc() then recreate that array of 10 floats using realloc().

#include<stdio.h>
#include<stdlib.h>


int main(){
    int *ptr;
    int i;
    ptr= (int *) calloc(6, sizeof(int));
    for(i=0; i<6; i++){
        printf("Enter any float point number : ");
        scanf("%d",&ptr[i]);
    }
    for(i=0; i<6; i++){
        printf("The number%d is : %d\n", i+1, ptr[i]);
    }

    ptr= realloc(10, sizeof(int));
    for(i=0; i<10; i++){
        printf("Enter any float point number : ");
        scanf("%d",&ptr[i]);
    }
    for(i=0; i<10; i++){
        printf("The number%d is : %d\n", i+1, ptr[i]);
    }
    return 0;
}