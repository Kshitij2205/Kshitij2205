// Write a program to print multiplication table of 10 in reverse order.

#include <stdio.h>

int main()
{
    int num, inc;

    num = inc = 10;

    while (inc > 0)
    {
        printf("%d x %2d = %2d\n", num, inc, num * inc);
        inc--;
    }

    return 0;
}