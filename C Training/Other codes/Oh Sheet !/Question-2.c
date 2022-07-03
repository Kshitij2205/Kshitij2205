# include <stdio.h>

// Check whether the number taken from user is divisible by 2 and 3 or not.

int main()
{
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if(number % 2 == 0 && number % 3 == 0)
        printf("The number %d is divisible by both.", number);

    else
        printf("The number %d is not divisible by both.", number);

    return 0;
}