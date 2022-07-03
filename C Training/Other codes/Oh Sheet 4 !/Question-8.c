# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to count the frequency of each element of an array.

int main()
{
    int i, k;
    int count = 0;
    int arr[10] = {1, 1, 3, 4, 5, 6, 7, 8, 9, 10};

    for(i = 0; i < 10; i++)
    {
        for(k = i + 1; k < 10; k++)
        {
            if(arr[i] == arr[k])
                count++;
        }
    }

    printf("The frequency is %d. \n", count);

    return 0;
}