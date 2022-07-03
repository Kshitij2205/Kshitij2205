# include <stdio.h> // Wrong i guess !?!?
# include <string.h>
# include <windows.h>

// Program to insert new value in the array in desired position.

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i, num, pos, new[6];

    printf("Enter the index of the array (position): ");
    scanf("%d", &pos);

    printf("Enter the number to insert it in the array: ");
    scanf("%d", &new[pos]);

    for(i = 0; i < pos; i++)
        new[i] = arr[i];

    for(i = pos + 1; i < 6; i++)
        new[i] = arr[i];

    for(i = 0; i < 6; i++)
        printf("%d element: %d \n", i + 1, new[i]);

    return 0;
}