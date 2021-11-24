// Write a C program to create a dynamic array of 5 floats using malloc().

#include<stdio.h>
#include<stdlib.h>


int main(){
    float *ptr;
    int i;
    ptr= (float *) malloc(5 * sizeof(float));
    for(i=0; i<5; i++){
        printf("Enter any float point number : ");
        scanf("%f",&ptr[i]);
    }
    for(i=0; i<5; i++){
        printf("The number%d is : %f\n", i+1, ptr[i]);
    }
    return 0;
}