# include <stdio.h>
# include <string.h>
# include <windows.h>

// Output:

// 1    
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

int main()
{
    int i, k;

    for(i = 1; i <= 5; i++)
    {
        for(k = i; k >= 1; k--)
            printf("%d ", i);

        printf("\n");
    }

    return 0;
}