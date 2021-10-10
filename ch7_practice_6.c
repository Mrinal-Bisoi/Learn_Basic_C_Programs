// Q) Write a C program containing a function which counts the number of positive integers in an array.

#include<stdio.h>

int countPos(int *arr, int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] > 0){
            count = count + 1;
        }
    }
    return count;
}

int main()
{
    int arr[10];
    printf("Enter the 10 element in the array : \n");
    for(int i = 0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    printf("The count of the positive number in the array is %d \n",countPos(arr,10));
    return 0;
}