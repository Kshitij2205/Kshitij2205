#include <stdio.h>
#include <string.h>
#include <windows.h>

// Program to print all unique elements in an array.

int main()
{
    int i, unique[5];
    int arr[5] = {7, 107, 11, 51, 69};

    for (i = 0; i < 5; i++)
    {
        if (arr[i] > 9)
            unique[i] = arr[i] % 10;

        else if (arr[i] > 99)
        {
            unique[i] = arr[i] % 100;
            unique[i] = unique[i] % 10;
        }
        else
            unique[i] = arr[i];
    }

    for (i = 0; i < 5; i++)
        printf("%d unique element: %d \n", i + 1, unique[i]);

    return 0;
}