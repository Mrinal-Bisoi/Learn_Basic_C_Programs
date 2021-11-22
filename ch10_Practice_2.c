// Write a C program to generate a multiplication table of a given number in text format. Make sure that the file is readable and well formated.

#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("pr2.txt", "w");
    printf("Enter the integer you need the table of: ");
    scanf("%d", &num);
    for(int i = 0; i < 10; i++){
        fprintf(ptr, "%d X %d = %d\n",num, i+1, num*(i+1));    // Go check the pr2.txt file and here I use 3 as num
    }
    return 0;
}