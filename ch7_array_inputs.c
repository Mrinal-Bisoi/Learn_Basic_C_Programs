#include <stdio.h>

int main()
{
    int arr[4];

    printf("Enter the marks of student 1 : ");
    scanf("%d", &arr[0]);
    printf("Enter the marks of student 2 : ");
    scanf("%d", &arr[1]);
    printf("Enter the marks of student 3 : ");
    scanf("%d", &arr[2]);
    printf("Enter the marks of student 4 : ");
    scanf("%d", &arr[3]);

    printf("The marks of 4 students are %d , %d, %d and %d \n", arr[0], arr[1], arr[2], arr[3]);
    return 0;
}