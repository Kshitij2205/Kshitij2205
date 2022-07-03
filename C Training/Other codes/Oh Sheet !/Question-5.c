# include <stdio.h>

// Program to input the basic salary of a person.
// He gets 15% of the basic as HRA, 15% of the basic as Conveyance allowance
// And 10% of the basic as Entertainment allowance.

// The total salary is calculated by adding 
// Basic + HRA + Conveyance + Entertainment Allowance.

// Calculate and print the total salary of the person.

int main()
{
    int basic;
    float HRA, Conv, Ent, total;

    printf("Enter your basic salary: ");
    scanf("%d", &basic);

    HRA = 0.15 * basic;
    Conv = 0.15 * basic;
    Ent = 0.1 * basic;

    total = basic + HRA + Conv + Ent;

    printf("Your total salary is % 0.2f", total);

    return 0;
}