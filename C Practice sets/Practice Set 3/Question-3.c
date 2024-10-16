// Calculate income tax paid by an employee to the government as per the slabs mentioned below:

// Income Slab      Tax
// 2.5l - 5.0l      5%
// 5.0l - 10.0l     20%
// Above 10.0l      30%

// Note that there is no tax below 2.5l.
// Take the input amount as an input from the user.

#include <stdio.h>

int main()
{
    float income;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income < 250000)
        printf("No tax !\n");

    else if (income >= 250000 && income < 500000)
        printf("Income tax = %.2f\n", income - (0.05 * income));

    else if (income >= 500000 && income <= 1000000)
        printf("Income tax = %.2f\n", income - (0.2 * income));

    else
        printf("Income tax = %.2f\n", income - (0.3 * income));

    return 0;
}