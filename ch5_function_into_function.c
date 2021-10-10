#include<stdio.h>

void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();
    return 0;
}

void goodMorning(){
    printf("Good Morning from Mrinal. \n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Good Afternoon from Mrinal. \n");
    goodNight();
}

void goodNight(){
    printf("Good Night from Mrinal. \n");
}