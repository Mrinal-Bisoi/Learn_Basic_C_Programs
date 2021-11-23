// Write a C program to modify a file containing an intiger to double it's value. e.g. 3(old value)---->6(new value)

#include<stdio.h>

int main(){
    FILE *ptrR;
    FILE *ptrW;
    int num;
    ptrR= fopen("pr5.txt","r");
    fscanf(ptrR, "%d", &num);
    printf("The previous value of the pr5 text file is : %d  \n", num);
    fclose(ptrR);
    ptrW= fopen("pr5.txt","w");
    fprintf(ptrW, "%d", (num*2));
    printf("Successfully double the intiger value in the file pr5.txt. \n");
    fclose(ptrW);
    return 0;
}