// Using C write a structure capable of storing times(hh:mm:ss). Write a functuion to compare those times.

#include <stdio.h>

typedef struct time
{
    int hour;
    int minute;
    int second;
} time;

void show(time t)
{
    printf("The time is : %dh:%dm:%ds \n", t.hour, t.minute, t.second);
}

int tymcmp(time t1, time t2)
{
    // First compare the times on the basis of hour.
    if (t1.hour > t2.hour)
    {
        return 1;
    }
    if (t1.hour < t2.hour)
    {
        return -1;
    }
    // Otherwise compare the times on the basis of minute.
    if (t1.minute > t2.minute)
    {
        return 1;
    }
    if (t1.minute < t2.minute)
    {
        return -1;
    }
    // Otherwise compare the times on the basis of second.
    if (t1.second > t2.second)
    {
        return 1;
    }
    if (t1.second < t2.second)
    {
        return -1;
    }
    return 0;
}

int main()
{
    time t1 = {14, 21, 55};
    time t2 = {14, 22, 25};
    show(t1);
    show(t2);
    int a = tymcmp(t1, t2);
    // if a is 1 means first time is greater,
    // if a is -1 means second time is greater,
    // if a is 0 means both times are same.
    printf("After comparing those times the result is : %d \n", a);
    return 0;
}
