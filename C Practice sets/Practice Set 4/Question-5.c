// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main()
{
    int sum, inc;

    sum = 0;
    inc = 1;

    while (inc <= 10)
    {
        sum = sum + inc;
        inc++;
    }

        printf("The sum of first ten natural numbers is %d\n", sum);

    return 0;
}