#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of position %d in array is : %d \n", i + 1, arr[i]);
    }
    arr[3] = 5; // So in this function the change of value at index 3 is permanent in array.
}

int main()
{
    int arr[] = {10, 15, 20, 25, 30, 35};
    printArray(arr, 6);                                                    // here we pass the address to the function
    printf("The cahnged value at index3 in the array is : %d \n", arr[3]); // So we can change the value from another function.
    return 0;
}