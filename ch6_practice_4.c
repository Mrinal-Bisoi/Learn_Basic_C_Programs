/*
   Q) Write a C progam using a function which calculates the sum and the average of two numbers. Use pointers.
      and print the values of sum and average in main().
*/

#include <stdio.h>

void sum_avg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main()
{
    int a = 4, b = 3, sum;
    float avg;
    sum_avg(a, b, &sum, &avg);
    printf("The sum of 4 and 3 is : %d \n", sum);
    printf("The avg of 4 and 3 is : %.2f \n", avg);
    return 0;
}