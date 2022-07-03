# include <stdio.h>

// Program to calculate factorial of a given number.

int main()
{
    int num;
    int factorial = 1;
    int i = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(i < num)
    {
        i++;
        factorial = factorial * i;
    }

    printf("The factorial of %d is %d.", num, factorial);
    return 0;
}