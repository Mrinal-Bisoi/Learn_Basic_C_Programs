// Create an array of 5 complex numbers and display them with the help of a display function.The values must be taken as user input.

#include<stdio.h>

typedef struct complex
{
    int real;
    int img;
} cmp;

void display(cmp complex, int i){
    printf("Complex number_%d :  %d + i%d \n", i+1, complex.real, complex.img);
}

int main(){
    cmp complex[5];
    for(int i = 0; i < 5; i++){
        printf("Enter the real part and imaginary part of complex number%d : \n", i+1);
        scanf("%d  %d", &complex[i].real, &complex[i].img);
    }
    for(int i = 0; i < 5; i++){
        display(complex[i], i);
    }
    return 0;
}