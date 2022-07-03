# include <stdio.h>
# include <string.h>
# include <windows.h>

// Output:

// 1    
// 1 2  
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

int main()
{
    int i, k;

    for(i = 1; i <= 5; i++)
    {
        for(k = 1; k <= i; k++)
            printf("%d ", k);

        printf("\n");
    }

    return 0;
}