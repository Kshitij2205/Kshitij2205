# include <stdio.h>
# include <string.h>
# include <windows.h>

// Output:

// 1 2 3 4 5
// 2 3 4 5 
// 3 4 5
// 4 5
// 5

int main()
{
    int i, k;

    for(i = 1; i <= 5; i++)
    {
        for(k = 0 + i; k <= 5; k++)
            printf("%d ", k);

        printf("\n");
    }

    return 0;
}