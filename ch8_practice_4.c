/*
   Q) Write a function slice() to slice a string. It should change the original string such that it is now 
      the sliced string. Take m and n as the starting and ending position for slice.
*/

#include <stdio.h>

void slice(char *str, int m, int n)
{
    int i = 0;
    while ((i + m) < n)
    {
        str[i] = str[i + m];
        i++;
    }
    str[i] = '\0';
}

int main()
{
    char str[] = "Mrinal";
    slice(str, 1, 4);
    printf("After slicing the string is : %s \n", str);
    return 0;
}