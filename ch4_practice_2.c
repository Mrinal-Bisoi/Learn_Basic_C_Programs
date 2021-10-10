// Q) Write a C program to print multiplication table of 10 in a reverse order.(Consider 10*10 to 10*1)

#include<stdio.h>

int main()
{
    printf("****The multiplication table of 10 in reverse order:**** \n");
    for(int i=10;i;i--){
        printf("10 * %d = %d \n",i,10*i);
    }
    return 0;
}