// Write a C program to calculate the Xth percentage on the user given number of subject and mark of subjects using malloc().

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    int n;
    float sum=0.0;
    printf("Enter the number of subjects in your Xth : ");
    scanf("%d",&n);
    ptr = (float *) malloc(n * sizeof(float));
    for(int i = 0; i<n; i++){
        printf("Enter the mark of subject%d : ", i+1);
        scanf("%f", &ptr[i]);
    }
    for(int i = 0; i<n; i++){
        sum= sum + ptr[i]; 
    }
    printf("You got %.2f %% in your Xth.", (sum/n));
    return 0;
}