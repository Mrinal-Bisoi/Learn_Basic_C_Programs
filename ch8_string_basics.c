#include <stdio.h>

int main()
{
    char str1[] = {'M', 'r', 'i', 'n', 'a', 'l', '\0'};
    char str2[] = "Bisoi";
    char *ptr1 = &str1[0];
    char *ptr2 = str2;
    
    while (*ptr1)
    {
        printf("The address of %c is : %u\n", *ptr1, ptr1);
        ptr1++;
    }
    
    printf("\n");
    
    while (*ptr2)
    {
        printf("The address of %c is : %u\n", *ptr2, ptr2);
        ptr2++;
    }
    return 0;
}