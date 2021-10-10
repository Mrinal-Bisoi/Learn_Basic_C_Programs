#include<stdio.h>

int factorial(int x);

int main()
{
    int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("The factorial of %d is %d .\n",x,factorial(x));
    return 0;
}

int factorial(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}