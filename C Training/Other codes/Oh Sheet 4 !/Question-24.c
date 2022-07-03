# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to accept two matrices and check whether they are equal.

int main()
{
    int i, k;
    int f = 0;
    int arr[2][2] = {
        {2, 2},
        {2, 2}
    };

    int arr1[2][2] = {
        {2, 2},
        {2, 2}
    };

    for(i = 0; i < 2; i++)
    {
        for(k = 0; k < 2; k++)
        {
            if(arr[i][k] != arr1[i][k])
            {
                f = 1;
                break;
            }
        }
    }

    if(f == 1)
        printf("The two matrices are not equal !!! \n");

    else
        printf("The two matrices are equal !!! \n");

    return 0;
}