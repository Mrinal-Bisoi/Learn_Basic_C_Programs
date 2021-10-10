#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Mrinal";
    char str2[] = "Mirnal";

    // result = 0: Both the strings are same, 
    // 1: ASCII value of first mismatch character is greater in 1st string,
    // -1: ASCII value of first mismatch character is greater in 2nd string.
    int result = strcmp(str1, str2);

    switch (result)
    {
    case 0:
        printf("Both the strings are same. \n");
        break;
    
    case 1:
        printf("ASCII value of first mismatch character is greater in 1st string. \n");
        break;

    case -1:
        printf("ASCII value of first mismatch character is greater in 2nd string. \n");
        break;
    
    default:
        break;
    }        

    return 0;
}