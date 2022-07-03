# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to merge two arrays of same size.

int main()
{
    int first[5] = {0, 1, 2, 3, 4};
    int second[5] = {5, 4, 3, 2, 1};
    int i, k, merge[10];

    printf("The merged array- \n");

    for(i = 0; i < 5; i++)
        merge[i] = first[i];

    for(i = 5, k = 0; i < 10; i++, k++)
        merge[i] = second[k];

    for(i = 0; i < 10; i++)
        printf("%d element: %d \n", i + 1, merge[i]);

    return 0;
}