#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value after i++ is : %d \n", i++);
    printf("The value of i is : %d \n", i);
    //i++;        // it means pehle print kare fir increment kare
    //++i;        //it means pehle increment kare fir print kare
    printf("The value after ++i is : %d \n", ++i);
    printf("The value of i is : %d \n", i);
    i += 10; // it means increment the value of i by 10. It's a compound assignment operator just like -= , *= , /= , %=
    printf("After use of compound assignment operator the value of i is : %d \n", i);
    return 0;
}