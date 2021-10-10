// Create a 2-d array by taking user input. Write a display function to print the content of this 2-d array on screen.

#include <stdio.h>
int n_stu = 3, n_sub = 5;

void display(int marks[n_stu][n_sub], int n_stu, int n_sub)
{
    printf("\t Sub1 \t\t Sub2 \t\t Sub3 \t\t Sub4 \t\t Sub5 \n");
    printf("-------------------------------------------------------------------------------\n");
    for (int i = 0; i < n_stu; i++)
    {
        printf("Stu%d:",(i+1));
        for (int j = 0; j < n_sub; j++)
        {
            printf("\t  %d\t", marks[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int marks[n_stu][n_sub];
    for (int i = 0; i < n_stu; i++)
    {
        for (int j = 0; j < n_sub; j++)
        {
            printf("Enter the mark of student %d in subject %d : \n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    display(marks, n_stu, n_sub);
    return 0;
}