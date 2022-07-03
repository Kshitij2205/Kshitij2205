# include <stdio.h>
# include <string.h>
# include <windows.h>

// Output:

// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1

int main()
{
    int i, k;

    for(i = 5; i >= 1; i--)
    {
        for(k = 1; k <= i; k++)
            printf("%d ", i);

        printf("\n");
    }

    return 0;
}