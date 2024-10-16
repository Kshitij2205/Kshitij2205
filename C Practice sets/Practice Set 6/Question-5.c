// Write a program to print the value of a variable i by using pointer to pointer type of variable.

#include <stdio.h>

int main()
{
    int i, *j, **k;
    
    i = 10;
    
    j = &i;
    k = &j;

    printf("Value of i using pointer to pointer type is %d.\n", **k);

    return 0;
}