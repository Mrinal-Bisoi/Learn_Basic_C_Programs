/*
   Q) Write a C program having a variable i. Print the address of i, pass i to a function and
      print it's address. Are these addresses same, why?
*/

#include <stdio.h>

void printAddress(int i);

int main()
{
    int i = 21;
    printf("The address of i in main function is : %u \n", &i);
    printAddress(i);
    return 0;
}

void printAddress(int i)
{
    printf("The address of i in printAddress function is : %u \n", &i);
}

// Both addresses are not same as main pass a copy of i to the function not the main i.