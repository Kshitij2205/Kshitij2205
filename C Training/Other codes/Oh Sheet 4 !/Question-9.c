#include <stdio.h> // wrong
#include <string.h>
#include <windows.h>

// Program to find the maximum and minimum element in an array.

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i, k, max, min, store;

    for (i = 0; i < 5; i++)
    {
        for(k = 0; k < 5; k++)
        {
            if (arr[i] < arr[k])
                min = arr[i];

            else if (arr[i] > arr[k])
                max = arr[i];
        }
    }
    
    printf("The minimum element in the array is %d. \n", min);
    printf("The maximum element in the array is %d. \n", max);

    return 0;
}