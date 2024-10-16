// Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main()
{
    int num, inc;

    printf("Enter the number to print the table of it: ");
    scanf("%d", &num);

    for (inc = 1; inc <= 10; inc++)
        printf("%d x %2d = %2d\n", num, inc, num * inc);
    
    return 0;
}