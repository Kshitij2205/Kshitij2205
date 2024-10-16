// Write a program to calculate the factorial of a given number using for loop.

#include <stdio.h>

int main()
{
    int num, sum;

    printf("Enter the number to calculate the factorial of it: ");
    scanf("%d", &num);

    sum = 1;

    for (int i = 1; i < num; i++)
        sum = sum * (i + 1);

    printf("The factorial of %d is %d", num, sum);

    return 0;
}