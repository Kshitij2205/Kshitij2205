# include <stdio.h>

// Check whether the number taken from user is divisible by 5 or not.

int main()
{
    int number;
    
    printf("Enter the number: ");
    scanf("%d", &number);

    if(number % 5 == 0)
        printf("The number %d is divisible by 5.", number);

    else
        printf("The number %d is not divisible by 5.", number);

    return 0;
}