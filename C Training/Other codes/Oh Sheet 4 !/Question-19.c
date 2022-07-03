# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program for multiplication of two matrices.

int main()
{
    int i, k, final[2][2];

    int mat[2][2] = {
        {1, 2},
        {3, 4}
    };

    int add[2][2] = {
        {5, 6},
        {7, 8}
    };

    for(i = 0; i < 2; i++)
    {
        for(k = 0; k < 2; k++)
        final[i][k] = mat[i][k] * add[i][k];
    }

    for(i = 0; i < 2; i++)
    {
        for(k = 0; k < 2; k++)
            printf("final[%d][%d]: %d \n", i + 1, k + 1, final[i][k]);
    }

    return 0;
}