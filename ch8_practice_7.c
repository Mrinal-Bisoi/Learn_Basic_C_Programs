// Q) Write a C program to decrypt the string which is encrypted by adding 1 to the ASCII value of it's character. 

#include<stdio.h>

void decode(char *aft_encode, char *aft_decode){
    char *ptr = aft_encode;
    int i = 0;
    while(*ptr != '\0'){
        aft_decode[i] = (*ptr)-1;
        ptr++;
        i++;
    }
    aft_decode[i] = '\0';
}

int main()
{
    char aft_encode[] = "J!Mpwf!Zpv";
    char aft_decode[20];
    decode(aft_encode,aft_decode);
    printf("The string after encode is : %s \n", aft_encode);
    printf("The string after decode is : %s \n", aft_decode);
    return 0;
}