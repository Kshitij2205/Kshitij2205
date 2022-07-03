#include <stdio.h>
#include <string.h>
#include <windows.h>

// Program for a 2-d array of size 3*3 and print the matrix.

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };

    for(int i = 0; i < 3; i++)
    {
        for(int k = 0; k < 3; k++)
            printf("arr[%d][%d]: %d \n", i + 1, k + 1, arr[i][k]);
    }

        return 0;
}