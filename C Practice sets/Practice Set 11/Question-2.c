/* Use the array in problem 1 to store 6 integers entered by the user. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int*) malloc(6 * sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", ptr);
    }

    return 0;
}