# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to find the sum of rows and columns of a matrix.

int main()
{
    int i, k;
    int row_sum = 0;
    int col_sum = 0;
    int arr[3][3] = {
        {2, 2, 3},
        {4, 1, -6},
        {7, 8, 10}
    };

    for(i = 0; i < 3; i++)
    {
        for(k = 0; k < 3; k++)
            row_sum += arr[i][k];
    }

    for(i = 0; i < 3; i++)
    {
        for(k = 0; k < 3; k++)
            col_sum += arr[k][i];
    }

    printf("The sum of total rows is %d. \n", row_sum);
    printf("The sum of total columns is %d. \n", row_sum);

    return 0;
}