/* Write a program to find whether a year entered by the user is a leap year or not.
   Take year as the input from the user. */

#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if(year % 4 == 0)
        printf("The year %d is a leap year.\n", year);

    else
        printf("The year %d is not a leap year.\n", year);

    return 0;
}