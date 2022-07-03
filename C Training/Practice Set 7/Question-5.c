#include <stdio.h> //wrong

void reverse();

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    printf("Original order of array: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", numbers[i]);
    }

    printf("\n Function that reverses array: \n");

    reverse(numbers, 4);

    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", numbers[i]);
    }

    return 0;
}

void reverse(int arr[], int e)
{
    int *ptr;
    ptr = &arr[0];
    for(int n = 0; n < 2; n++)
    {   
        arr[n] = *(ptr + e);
        e--;
    }
}