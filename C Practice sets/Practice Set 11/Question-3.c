/* Solve problem 1 using calloc(). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int*) calloc(6, sizeof(int));

    return 0;
}