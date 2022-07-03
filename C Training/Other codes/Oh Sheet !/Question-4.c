# include <stdio.h>

// Find out the number input by the user is divisible by 5 or not, 
// if not then print the nearest number from the given number which is divisible by 5.

int main()
{
    int input, remainder, near;

    printf("Enter the number: ");
    scanf("%d", &input);

    remainder = input % 5;

    if(remainder == 0)
        printf("%d is divisible by 5.", input);

    else if( remainder == 4 || remainder == 3)
    {
        near = input - remainder + 5;
        printf("The nearest number found around %d is %d.", input, near);
    }
    else
    {
        near = input - remainder;
        printf("The nearest number found around %d is %d.", input, near);
    }
    return 0;
}