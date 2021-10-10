// Q) Write a C program to encrypt a string by adding 1 to the ASCII value of it's character. 

#include<stdio.h>

void encode(char *bef_encode, char *aft_encode){
    char *ptr = bef_encode;
    int i = 0;
    while(*ptr != '\0'){
        aft_encode[i] = (*ptr)+1;
        ptr++;
        i++;
    }
    aft_encode[i] = '\0';
}

int main()
{
    char bef_encode[] = "I Love You";
    char aft_encode[20];
    encode(bef_encode, aft_encode);
    printf("The string before encode is : %s \n", bef_encode);
    printf("The string after encode is : %s \n", aft_encode);
    return 0;
}