# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to store elements in an array and print it.

int main()
{
    int i;
    int arr[5] = {1, 2, 3, 4, 5};

    for(i = 0; i < 5; i++)
        printf("%d element: %d \n", i + 1, arr[i]);    

    return 0;
}