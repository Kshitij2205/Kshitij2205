// Write a program using recursion to calculate the sum of first n natural numbers.

int sum (int n)
{
    int s = 0;

    for (int i = 1; i <= n; i++)
        s = n + sum(n - 1);

    return s;
}


#include <stdio.h>

int main()
{
    int n;

    printf("Enter the n number of natural numbers: ");
    scanf("%d", &n);

    printf("The sum of first %d natural number is %d", n, sum(n));

    return 0;
}