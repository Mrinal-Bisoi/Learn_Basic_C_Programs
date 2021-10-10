#include <stdio.h>

int main()
{
    int skip = 5, i = 0;
    while (i < 10)
    {
        i++;
        if (i != skip)
            continue;      // it means after execute this line don't look at the the below lines in the loop & jump into the next iteration. 
        
        //Here when i == skip == 5 then only it goes to else part and print 5 otherwise enter in if part & skip else part.
        else
            printf("The value of i is %d \n", i);
    }
    return 0;
}