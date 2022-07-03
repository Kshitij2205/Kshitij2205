# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to find the sum of all elements of the array.

int main()
{
    int i, sum = 0;
    int arr[5] = {4, 5, 6, 7, 8};

    for(i = 0; i < 5; i++)
        sum += arr[i];

        printf("The sum of all elements is %d. \n", sum);

    return 0;
}