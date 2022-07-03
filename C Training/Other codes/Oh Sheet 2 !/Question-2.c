# include <stdio.h>

// Program to find the sum of first 10 natural numbers.

int main()
{   
    int sum = 0;

    for(int i = 1; i <= 10; i++)
    {    
        printf("%d \n", i);
        sum = sum + i;
    }

    printf("The sum is %d.", sum);
    return 0;
}