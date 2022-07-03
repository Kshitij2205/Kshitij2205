# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to sort elements of an array in descending order.

int main()
{
    int i, k, temp, merge[10];
    int first[5] = {1, 2, 3, 4, 11};
    int second[5] = {6, 7, 8, 9, 10};

    for(i = 0; i < 5; i++)
        merge[i] = first[i];

    for(i = 5, k = 0; i < 10; i++, k++)
        merge[i] = second[k];

    printf("The merged array: \n");

    for(i = 0; i < 10; i++)
        printf("%d ", merge[i]);

    printf("\n");

    for(i = 0; i < 9; i++)
    {
        for(k = i + 1; k < 10; k++)
        {
            if(merge[i] < merge[k])
            {
                temp = merge[i]; 
                merge[i] = merge[k];
                merge[k] = temp;
            }
        }
    }

    printf("The sorted array: \n");

    for(i = 0; i < 10; i++)
        printf("%d ", merge[i]);

    return 0;
}