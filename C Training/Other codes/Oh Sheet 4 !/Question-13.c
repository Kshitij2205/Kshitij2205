# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to insert new value in the array (sorted list).

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i, num, new[6];

    printf("Enter the number to insert it in the array: ");
    scanf("%d", &new[5]);

    for(i = 0; i < 5; i++)
        new[i] = arr[i];

    for(i = 0; i < 6; i++)
        printf("%d element: %d \n",i + 1, new[i]);

    return 0;
}