# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to find the sum of left diagonals of a matrix.

int main()
{
    int i;
    int sum = 0;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(i = 0; i < 3; i++)
        sum = sum + arr[i][i];

    printf("The sum of the left diagonals is %d.", sum);

    return 0;
}