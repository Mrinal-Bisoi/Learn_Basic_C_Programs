// Q) Create an array of size 3*10 containing multiplication tables of the numbers 2, 7 and 9 respectively.

#include <stdio.h>

int main()
{
    int muls[3][10];
    int num;
    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            num = 2;
            break;
        case 1:
            num = 7;
            break;
        case 2:
            num = 9;
            break;

        default:
            break;
        }
        for (int j = 0; j < 10; j++)
        {
            muls[i][j] = num * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            num = 2;
            printf("The multiplication table of %d is : \n",num);
            break;
        case 1:
            num = 7;
            printf("The multiplication table of %d is : \n",num);
            break;
        case 2:
            num = 9;
            printf("The multiplication table of %d is : \n",num);
            break;

        default:
            break;
        }
        printf("---------------------------------\n");
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d = %d\n", num, j+1 , muls[i][j]);
        }
        printf("*************************************");
        printf("\n");
    }
    return 0;
}