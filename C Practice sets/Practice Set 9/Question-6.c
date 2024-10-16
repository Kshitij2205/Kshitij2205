// Create an array of 5 complex numbers created in previous question and
// display them with the help of a display function. 
// The value must be taken as an input from the user.

#include <stdio.h>

void display(int arr[5])
{
    printf("Your array: ");

    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    display(arr);

    return 0;
}