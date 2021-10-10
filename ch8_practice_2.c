// Q) Write a C program to take string as an user input using %s and %c. Confirm that the strings are equal.

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[35];
    char str2[35];
    char c;
    int i = 0;
    printf("Enter the first string : ");
    scanf("%s",str1);
    printf("Enter the second string character by character(Tap double enter to stop entry) : \n");

    while(c != '\n'){
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i-1] = '\0';   //Here I replace the '\n' with '\0'.Now we get the correct result after compare both.

    printf("The value of first string is : %s \n",str1);
    printf("The value of second string is : %s \n",str2);

    int res = strcmp(str1, str2);
    if(res == 0){
        printf("Both the strings are same. \n");
    }
    else{
        printf("Both the strings are not same. \n");
    }
    return 0;
}