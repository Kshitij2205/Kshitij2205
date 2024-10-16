// Create a structure representing the bank account of a customer. 
// What fields did you use and why ?

#include <stdio.h>

struct bank
{
    int acc_no;         // as every custmoer has its unique identity
    char password[4];   // the customer must have a password bruh...
    char name[10];      // this is optional

} user1;

int main()
{
    printf("Enter your name: ");
    gets(user1.name);

    printf("Enter you account number: ");
    scanf("%d", &user1.acc_no);

    printf("Enter your password: ");
    scanf("%d", &user1.password);

    return 0;
}