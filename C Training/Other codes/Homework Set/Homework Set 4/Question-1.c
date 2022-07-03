# include <stdio.h>

// Printf this patter using nested loop.
// Nested loop is basically loop inside a loop.

// * * * * *
// * * * * *
// * * * * *
// * * * * *

int main()
{
    char a = '*';
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        printf("\n");
        for(j = 1; j <= 5; j++)
            printf("%c ", a);
    }

    return 0;
}