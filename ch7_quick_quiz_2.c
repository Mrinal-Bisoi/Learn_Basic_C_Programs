/*
   Q) Write a C program to try the following operations on an variable using a pointer :-
       (a) Addition of a number to a pointer
       (b) Subtraction of a number from a pointer
       (c) Subtraction of one pointer from another
       (d) Comparision of two pointer variables
*/

#include<stdio.h>

int main()
{
    int a = 3;
    int *ptr = &a;
    int *ptr1;

    printf("The address of a or value of ptr is : %u \n",ptr);
    ptr = ptr + 1;
    printf("The address of a or value of ptr is : %u \n",ptr);
    ptr = ptr - 1;
    printf("The address of a or value of ptr is : %u \n",ptr);
    ptr1 = ++ptr;       // it increment the value of ptr from 2686756 to 2686760 & assign that value to ptr1.
    printf("The address of ptr is : %u \n",ptr);
    printf("The address of ptr1 is : %u \n",ptr1);
    ++ptr1;
    printf("The difference between ptr1 and ptr is : %d \n",(ptr1-ptr));
    printf("The address of ptr is : %u \n",ptr);
    printf("The address of ptr1 is : %u \n",ptr1);
    if (ptr1 == ptr){
        printf("The value of ptr1 and ptr is same. \n");
    }
    else{
        printf("The value of ptr1 and ptr is not same. \n");
    }
    return 0;
}