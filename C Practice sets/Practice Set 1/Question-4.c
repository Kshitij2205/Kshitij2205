/* Write a program to calculate simple interest for a set of values representing  
   principle, number of years and rate of interest */

#include <stdio.h>

int main()
{
    float simple_interest, principle, no_years, rate;

    printf("Enter the principle: ");
    scanf("%f", &principle);

    printf("Enter the number of years: ");
    scanf("%f", &no_years);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    simple_interest = (principle * no_years * rate) / 100;

    printf("The simple interest is %0.2f\n", simple_interest);

    return 0;
}