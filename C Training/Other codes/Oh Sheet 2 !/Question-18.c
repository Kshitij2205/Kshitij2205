# include <stdio.h>
# include <string.h>
# include <windows.h> // Wrong !!!

// Program to find the prime numbers within a given range.

int main()
{
    int range, k, start;
    int f = 0;

    printf("Enter the range of numbers to print prime numbers for u: ");
    scanf("%d", &range);

    for (start = 1; start <= range; start++)
    {
        for (k = 2; k < start; k++)
        {
            if (start % k == 0)
            {
                f = 1;
                break;
            }

        if(f == 1)
            f = 0;
        
        else if( f == 0)
            printf("%d is a prime number. \n", start);

        }
    }

    return 0;
}