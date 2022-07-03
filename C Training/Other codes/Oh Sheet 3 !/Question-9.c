# include <stdio.h> // Not done
# include <string.h>
# include <windows.h>

// Output:

// 1
// 0 1
// 1 0 1
// 0 1 0 1

int main()
{
    int i, k;

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5; k++)
            printf("%d ", k);

        printf("\n");
    }

    return 0;
}