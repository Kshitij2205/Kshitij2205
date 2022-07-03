#include <stdio.h>

int main()
{

    int year;

    printf("Enter your year here to check if its leap year or not: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a leap year !", year);
    }

    else
    {
        printf("%d is not a leap year !", year);
    }

    return 0;
}