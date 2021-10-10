#include<stdio.h>

int main()
{
    //char arr[] = "Mrinal Vau";      // After declared array like this way, we can't modify it later.
    char *arr = "Mrinal Vau";       // After declared array like this way, we can modify it later.
    arr = "Mrinal Vai";
    printf("%s \n",arr);
    return 0;
}