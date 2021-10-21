#include<stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[40];
    float salary;
};

int main(){
    struct employee telegram[100];
    telegram[0].id = 100;
    strcpy(telegram[0].name,"Mrinal");
    telegram[0].salary = 1500000.50;

    telegram[1].id = 101;
    strcpy(telegram[1].name,"Anmol");
    telegram[1].salary = 1500000.25;

    telegram[2].id = 102;
    strcpy(telegram[2].name,"Suchana");
    telegram[2].salary = 1500000.75;
    
    printf("Done");
    return 0;
}