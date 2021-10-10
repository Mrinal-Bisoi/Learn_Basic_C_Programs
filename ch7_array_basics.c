#include <stdio.h>

int main()
{
    int arr[4];

    arr[0] = 78;
    arr[1] = 91;
    arr[2] = 97;
    arr[3] = 89;

    printf("The address of arr[0] is : %u \n", &arr[0]);
    printf("The address of arr[1] is : %u \n", &arr[1]);
    printf("The address of arr[2] is : %u \n", &arr[2]);
    printf("The address of arr[3] is : %u \n", &arr[3]);
    return 0;
}