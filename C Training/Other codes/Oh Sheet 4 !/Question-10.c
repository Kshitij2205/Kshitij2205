# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to separate odd and even integers in separate arrays.

int main()
{
    int arr[5] = {4, 5, 6, 7, 8};
    int i, even[5], odd[5];

    for(i = 0; i < 5; i ++)
    {
        if(arr[i] % 2 == 0)
        {
            even[i] = arr[i];
            odd[i] = 0;
        }

        else if(arr[i] % 2 != 0)
        {
            odd[i] = arr[i];
            even[i] = 0;
        }
    }

    printf("The even array: \n");

    for(i = 0; i < 5; i ++)
        printf("%d ", even[i]);

    printf("\n");
    printf("The odd array: \n");

    for(i = 0; i < 5; i ++)
        printf("%d  ", odd[i]);

    return 0;
}