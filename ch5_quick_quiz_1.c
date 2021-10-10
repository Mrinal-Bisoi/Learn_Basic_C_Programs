/*
   Q) Write a C program with three functions :
      (1) goodMorning function which prints "Good Morning"
      (2) goodAfternoon function which prints "Good Afternoon"
      (3) goodNight function which prints "Good Night"
      main() should call all of these functions in order (1)->(2)->(3)
*/

#include<stdio.h>

void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}

void goodMorning(){
    printf("Good Morning from Mrinal. \n");
}

void goodAfternoon(){
    printf("Good Afternoon from Mrinal. \n");
}

void goodNight(){
    printf("Good Night from Mrinal. \n");
}