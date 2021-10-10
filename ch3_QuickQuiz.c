/*
   Q) Write a C program to find grade of a student based on his given marks. Grading system is given below :
      90-100  ---> Grade A
      80-89   ---> Grade B
      70-79   ---> Grade C
      60-69   ---> Grade D
      below 60---> Fail
*/

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks(out of 100) : ");
    scanf("%d", &marks);

    if((marks <= 100) && (marks >= 90)){
        printf("Your grade is A. \n");
    }
    else if((marks <90) && (marks >= 80)){
        printf("Your grade is B. \n");
    }
    else if((marks <80) && (marks >= 70)){
        printf("Your grade is C. \n");
    }
    else if((marks <70) && (marks >= 60)){
        printf("Your grade is D. \n");
    }
    else{
        printf("Fail !!! \n");
    }
    return 0;
}