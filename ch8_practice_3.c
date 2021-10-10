// Q) Write a function which work same as strlen function from <string.h>

#include<stdio.h>

int strlen(char *str){
    char *ptr = str;
    int len = 0;
    while(*ptr != '\0'){
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char str[] = "Mrinal Bisoi";
    int l = strlen(str);
    printf("The length of the string is : %d \n",l);
    return 0;
}