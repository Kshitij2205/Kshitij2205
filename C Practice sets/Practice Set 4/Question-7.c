// Write a program to calculate the sum of the numbers occuring in the multiplication table of 8.

#include <stdio.h>

int main()
{
    int num, inc, sum;

    sum = 0;
    num = 8;

    for(inc = 1; inc <= 10; inc++)
        sum = sum + (num * inc);

    printf("The sum of the numbers occuring in the multiplication table of 8 is %d.\n", sum);



    return 0;
}