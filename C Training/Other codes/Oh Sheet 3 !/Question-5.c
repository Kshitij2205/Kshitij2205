# include <stdio.h>
# include <string.h>
# include <windows.h>

// Output:

// 1    
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

int main()
{
    int i, k;

    for(i = 1; i <= 5; i++)
    {
        for(k = i; k >= 1; k--)
            printf("%d ", k);

        printf("\n");
    }

    return 0;
}