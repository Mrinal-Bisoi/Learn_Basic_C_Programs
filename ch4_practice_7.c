/*
   Q) Write a C program to calculate the sum of the numbers occuring in the multiplication table of 8.
      (Consider 8*1 to 8*10)
*/
#include<stdio.h>

int main()
{
    int i , sum = 0;
    for(i = 1; i <= 10; i++){
        sum = sum + (8 * i);
    }
    printf("The sum of the numbers occuring in the multiplication table of 8 is %d \n",sum);
    return 0;
}