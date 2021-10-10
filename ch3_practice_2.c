/*
   Q) Write a C program to find out whether a student is pass or fail, if it requires total 40% and
      atleast 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user.
*/
#include <stdio.h>

int main()
{
    int a, b, c, sum;
    printf("Enter the marks of first subject(out of 100) : ");
    scanf("%d", &a);
    printf("Enter the marks of second subject(out of 100) : ");
    scanf("%d", &b);
    printf("Enter the marks of third subject(out of 100) : ");
    scanf("%d", &c);

    sum = a + b + c;
    if ((a > 100) || (b > 100) || (c > 100))
    {
        printf("Invalid input !!! \n");
    }
    else if ((a >= 33) && (b >= 33) && (c >= 33) && (sum >= 120))
    {
        printf("You are pass in all the subjects. \n");
    }
    else
    {
        printf("You are fail. \n");
    }
    return 0;
}