// Using C to create a structure representing a bank account of a customer.
// Put some important fields into that structure and show the details of the customer passbook.

#include<stdio.h>
#include<string.h>
typedef struct PassBook{
    char name[40];
    int age;
    char OpeningDate[10];
    long long accntNo;
    char branch[20];
    char IFSC[15];
    double balance;
    long long mob;

}custm;

void details(custm c, int i){
    printf("The name of the customer_%d is :  %s \n", i+1,  c.name);
    printf("The age of the customer_%d is :  %d \n", i+1,  c.age);
    printf("The account opening date of the customer_%d is :  %s \n", i+1,  c.OpeningDate);
    printf("The account number of the customer_%d is :  %lld \n", i+1,  c.accntNo);
    printf("The account branch name of the customer_%d is :  %s \n", i+1,  c.branch);
    printf("The account IFSC code of the customer_%d is :  %s \n", i+1,  c.IFSC);
    printf("The account balance of the customer_%d is :  %.2lf \n", i+1,  c.balance);
    printf("The mobile number of the customer_%d is :  %lld \n", i+1,  c.mob);
}

int main(){
    custm c[3];

    for(int i = 0;i<3;i++){
    printf("Enter the name of the customer_%d : ", i+1);
    fflush(stdin);        // To clear the input buffer.
    gets(c[i].name);
    printf("Enter the age of the customer_%d : ", i+1);
    scanf("%d",&c[i].age);
    printf("Enter the account opening date[dd/mm/yyyy] of the customer_%d : ", i+1);
    scanf("%s",&c[i].OpeningDate);
    printf("Enter the account no of the customer_%d : ", i+1);
    scanf("%lld",&c[i].accntNo);
    printf("Enter the branch name for the account of the customer_%d : ", i+1);
    fflush(stdin);      // To clear the input buffer.
    gets(c[i].branch);
    printf("Enter the IFSC code for the account of the customer_%d : ", i+1);
    fflush(stdin);      // To clear the input buffer.
    gets(c[i].IFSC);
    printf("Enter the account balance of the customer_%d : ", i+1);
    scanf("%lf",&c[i].balance);
    printf("Enter the mobile no of the customer_%d : ", i+1);
    scanf("%lld",&c[i].mob);
    }

    for(int i = 0;i<3;i++){
        details(c[i],i);
    }
    return 0;
}