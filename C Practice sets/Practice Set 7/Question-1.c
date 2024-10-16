/* Create an array of 10 numbers. Verify using poiner arithmetic that (ptr + 2) points to the third element
   where ptr is a pointer pointing to the first element of the array. */ 

#include <stdio.h>

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr;

    ptr = arr; // arr = &arr[0]

    printf("The value of third element is %d\n", *(ptr + 2));


    return 0;
}