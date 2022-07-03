# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to find the number and sum of all integer 
// Between 100 and 200 which are divisible by 9.

int main()
{
    int i = 100;
    int sum = 0;

    for(i = 100; i <= 200; i++)
    {
        if(i % 9 == 0)
        {
            printf("%d \n", i);
            sum = sum + i;
        }
    }

    printf("The sum of all the integer that is divisible by 9 is %d.", sum);

    return 0;
}