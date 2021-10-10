#include <stdio.h>

int main()
{
    // Here BODMAS rules are not applicable like math,
    // As per Priority Table the higher priority operators are evaluate first in the absense of parenthesis,
    // When priority is same then we check the associativity, it will be either left to right or right to left.
    // operator(Priority High to Low )            Associativity
    //-----------------------------------------------------------
    //    *    /    %                             left to right
    //    +    -                                  left to right
    //         =                                  right to left
    int x = 6;
    int y = 2;
    printf("The value of 4 * x + 3 * y is %d \n", 4 * x + 3 * y);    // As * have higher priority than + , all the multiplication part evaluate first
    printf("The value of 4 * x / 3 * y is %d \n", 4 * x / 3 * y);    // As * / have same priority, the associativity will be left to right
    // 4 * 6 / 3 * 2
    // 24 / 3 * 2
    // 8 * 2
    // 16
    return 0;
}