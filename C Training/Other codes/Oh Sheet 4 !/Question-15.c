# include <stdio.h>
# include <string.h> // idk if this the right solution...
# include <windows.h>

// Program to delete an element from the desired position in the array.

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i, del, new[5];

    printf("Enter the index of the array to delete the element of it: ");
    scanf("%d", &del);

    for(i = 0; i < 5; i++)
    {
        if(i == del)
            arr[i] = 0;

        new[i] = arr[i];
    }

    printf("The modified array: \n");

    for(i = 0; i < 5; i++)
        printf("%d element: %d \n", i + 1, new[i]);


    return 0;

}