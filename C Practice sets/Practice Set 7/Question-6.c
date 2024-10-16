// Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

int count(int *arr)
{
    int positive_integers = 0;

    for(int i = 0; i < 5; i++)
    {
        if (arr[i] >= 0)
            positive_integers++;
    }

    return positive_integers;
}

int main()
{
    int arr[5] = {4, -2, 9, -1, -8};

    count(arr);

    printf("There are %d numbers of positive integers.\n", count(arr));

    return 0;
}