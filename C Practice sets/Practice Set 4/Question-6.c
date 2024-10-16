// Write a program to to implement the previous program using for and do - while loop.

#include <stdio.h>

int main()
{
    int while_inc, for_inc, while_sum, for_sum;

    while_inc = for_inc = 1;
    while_sum = for_sum = 0;

    while (while_inc <= 10)
    {
        while_sum = while_sum + while_inc;
        while_inc++;
    }

    printf("While loop natural numbers: %d\n", while_sum);

    do
    {
        for_sum = for_sum + for_inc;
        for_inc++;
    } while (for_inc <= 10);

    printf("Do while natural numbers: %d\n", for_sum);

    return 0;
}