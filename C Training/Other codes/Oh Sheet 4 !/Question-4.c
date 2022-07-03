# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to copy the elements of one array into another array.

int main()
{
    int i, store[5];
    int arr[5] = {10, 8, 6, 4, 2};

    for(i = 0; i < 5; i++)
    {
        store[i] = arr[i];
        printf("%d element: %d \n", i + 1, store[i]);
    }
    
    return 0;
}