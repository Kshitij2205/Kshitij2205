# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to check whether a given number is a perfect number or not.

// Perfect number - a positive number which sum of all positive divisors
// excluding that number equal to that number.

// Since the divisior of 6 are 1, 2 and 3.
// Sum of its divisors is 1 + 2 + 3 = 6. 

int main()
{
    int i, num;
    int sum = 0;

    printf("Enter the number to check if its perfect number or not: ");
    scanf("%d", &num);

    printf("The divisors of the number %d are - \n", num);

    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
            printf("%d \n", i);
        }
    }

    if(sum == num)
        printf("%d is a perfect number.", num);

    else   
        printf("%d is not a perfect number.", num);

    return 0;
}