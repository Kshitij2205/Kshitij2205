# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to read n number of values in an array and display it.

int main()
{
    int n, i;
    int arr[5] = {2, 4, 6, 8, 10};

    printf("Enter the number of values to read in the array (1-5): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        printf("%d element: %d \n", i + 1, arr[i]);

    return 0;
}