# include <stdio.h> // Wrong
# include <string.h>
# include <windows.h>

// Program to find the perfect number within a given number of range.

    int main()
{
    int range, x;
    int perfect = 0;
    int i;
    int num = 1;

    printf("Enter the range of number to check the perfect number within it: ");
    scanf("%d", &range);

    while(num <= range)
    {
        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
                perfect = perfect + i;
        }
        if(perfect == num)
            printf("%d \n", perfect);

        num++;
    }

    return 0;
    }