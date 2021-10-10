// Q) Write a C program using recursion to calculate n th element of fibonacci series.

#include<stdio.h>

int fibo(int n);

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The value of %dth element in fibonacci series is : %d .\n",n,fibo(n));
    return 0;
}

int fibo(int n){
    if(n == 1){
        return 0;
    }
    else if(n == 2){
       return 1; 
    }
    else{
        return fibo(n-1) + fibo(n-2);
    }
}