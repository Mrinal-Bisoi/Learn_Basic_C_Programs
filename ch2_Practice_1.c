/*
 Q) Which of the following is invalid in C :
    (i)    int a; b = a;
    (ii)   int v = 3^3;
    (iii)  char dt = '24 sept 2021';
*/
#include<stdio.h>

int main()
{
    int a ;
    // b = a;       // this line gives an error as b is not declared.
    int v = 3^3;        // this line not return 3 exponential 3, it returns the XOR of 3,3 but it not give error
    //char dt = '24 Sept 2021';           // this line gives an error as char can take only 1bit and we pass here string.
    printf("The value of v is %d \n",v); 
    return 0;
} 