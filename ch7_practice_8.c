// Q) Create an array of size 3*10 containing multiplication tables for the custom inputs given by the user.

#include<stdio.h>

void printTable(int *mulTable, int num, int upto){
    printf("The multiplication table of %d is: \n",num);
    for(int i = 0; i < upto; i++){
        mulTable[i] = num*(i+1);        // Here we store the value in 1-D array one by one using for loop
    }
    for(int i = 0; i<upto; i++){
        printf("%d X %d = %d \n",num, (i+1),mulTable[i]);
    }
    printf("************************************\n\n");
}

int main()
{
    int n, upto;
    int *ptr;

    printf("Multiplication table of how many numbers you want : ");
    scanf("%d",&n);
    printf("Upto where you want your multiplication table : ");
    scanf("%d",&upto);

    int num[n];
    ptr = &num[0];
    for(int i = 0; i<n;i++){
        printf("Enter the number to get their multiplication table : ");
        scanf("%d",&num[i]);
    }

    //mulTable[3][10] mean a 2-D array of 3 rows 10 columns or 3  1-D array of size 10
    int mulTable[n][upto];
    for(int i = 0; i<n; i++){
        printTable(mulTable[i], *ptr, upto);        // Here we pass 1-D array as 1st argument
        ptr++;
    }
    return 0;
}