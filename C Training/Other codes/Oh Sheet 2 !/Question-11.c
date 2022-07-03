# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to display the n terms of sqaure of natural number and their sum.

int main()
{
    int terms, i, square;
    int sum = 0;

    printf("Enter the terms to print the square of natural numbers: ");
    scanf("%d", &terms);

    for(i = 1; i <= terms; i++)
    {
        square = i * i;
        printf("%d term = %d \n", i, square);
        sum = sum + square;
    }

    printf("The sum of the square of natural numbers is %d.", sum);

    return 0;
}