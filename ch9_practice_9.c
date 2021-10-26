// Using C write a structure capable of storing dates(dd/mm/yyyy). Write a functuion to compare those dates.

#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

void show(date d)
{
    printf("The date is : %d/%d/%d \n", d.day, d.month, d.year);
}

int dtcmp(date d1, date d2)
{
    // First compare the dates on the basis of year.
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    // Otherwise compare the dates on the basis of month.
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    // Otherwise compare the dates on the basis of day.
    if (d1.day > d2.day)
    {
        return 1;
    }
    if (d1.day < d2.day)
    {
        return -1;
    }
    return 0;
}

int main()
{
    date d1 = {27, 8, 1996};
    date d2 = {27, 8, 1996};
    show(d1);
    show(d2);
    int a = dtcmp(d1, d2);
    // if a is 1 means first date is greater,
    // if a is -1 means second date is greater,
    // if a is 0 means both dates are same.
    printf("After comparing those dates the result is : %d \n", a);
    return 0;
}