// Write a C program to create a dynamic array of 6 floats using calloc().

#include<stdio.h>
#include<stdlib.h>


int main(){
    float *ptr;
    int i;
    ptr= (float *) calloc(6, sizeof(float));
    for(i=0; i<6; i++){
        printf("Enter any float point number : ");
        scanf("%f",&ptr[i]);
    }
    for(i=0; i<6; i++){
        printf("The number%d is : %f\n", i+1, ptr[i]);
    }
    return 0;
}