// Using C write a structure capable of storing timestamps(dd/mm/yyyy.hh:mm:ss). Write a functuion to compare those timestamps.

#include <stdio.h>

typedef struct timestamp
{
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;
} tymstmp;

void show(tymstmp ts)
{
    printf("The timestamp is : %d/%d/%d.%dh:%dm:%ds \n", ts.day, ts.month, ts.year, ts.hour, ts.minute, ts.second);
}

int tscmp(tymstmp ts1, tymstmp ts2)
{
    // First compare the timestamps on the basis of year.
    if (ts1.year > ts2.year)
    {
        return 1;
    }
    if (ts1.year < ts2.year)
    {
        return -1;
    }
    // Otherwise compare the timestamps on the basis of month.
    if (ts1.month > ts2.month)
    {
        return 1;
    }
    if (ts1.month < ts2.month)
    {
        return -1;
    }
    // Otherwise compare the timestamps on the basis of day.
    if (ts1.day > ts2.day)
    {
        return 1;
    }
    if (ts1.day < ts2.day)
    {
        return -1;
    }
    // Otherwise compare the timestamps on the basis of hour.
    if (ts1.hour > ts2.hour)
    {
        return 1;
    }
    if (ts1.hour < ts2.hour)
    {
        return -1;
    }
    // Otherwise compare the timestamps on the basis of minutse.
    if (ts1.minute > ts2.minute)
    {
        return 1;
    }
    if (ts1.minute < ts2.minute)
    {
        return -1;
    }
    // Otsherwise compare the timestamps on the basis of second.
    if (ts1.second > ts2.second)
    {
        return 1;
    }
    if (ts1.second < ts2.second)
    {
        return -1;
    }
    return 0;
}

int main()
{
    tymstmp ts1 = {26, 10, 2021, 14, 21, 55};
    tymstmp ts2 = {26, 10, 2021, 14, 22, 25};
    show(ts1);
    show(ts2);
    int a = tscmp(ts1, ts2);
    // if a is 1 means first timestamp is greater,
    // if a is -1 means second timestamp is greater,
    // if a is 0 means both timestamp are same.
    printf("After comparing those timestamps the result is : %d \n", a);
    return 0;
}