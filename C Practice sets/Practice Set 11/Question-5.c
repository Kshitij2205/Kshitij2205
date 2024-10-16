/* Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). 
   Use realloc to make it store 15 number (from 7 x 1 to 7 x 15). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val = 7, i, *table;

    table = (int*) malloc(10 * sizeof(int));

    for (i = 0; i < 10; i++)
    {
        table[i] = val * (i + 1);
        printf("%d\n", table[i]);
    }

    table = (int*) realloc(table, 15 * sizeof(int));

    for (i = 10; i < 15; i++)
    {
        table[i] = val * (i + 1);
        printf("%d\n", table[i]);
    }

    return 0;
}