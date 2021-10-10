/*
 Q) Write a C program to calculate the area of a circle and modify the same program to calculate the volume
    of a cylinder given it's height.
*/

#include <stdio.h>

int main()
{
    int radious = 3;
    float pi = 3.14;
    printf("The area of circle is %.2f m2. \n", pi * radious * radious);
    int height = 5;
    printf("The volume of this cylinder is %.2f m3. \n", pi * radious * radious * height);
    return 0;
}