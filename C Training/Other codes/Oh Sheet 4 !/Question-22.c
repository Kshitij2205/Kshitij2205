# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to find the sum of right diagonals of a matrix.

int main()
{
    int i, k;
    int sum = 0;
    int arr[3][3] = {
        {2, 2, 3},
        {4, 7, 6},
        {7, 8, 11}
    };

    for(i = 0, k = 2; i < 3; i++, k--)
        sum = sum + arr[i][k];

    printf("The sum of the left diagonals is %d.", sum);

    return 0;
}