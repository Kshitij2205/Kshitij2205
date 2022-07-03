# include <stdio.h>

// Program to display the sum of the series [9 + 99 + 999 + 9999 + ...]

int main()
{
    int terms;
    int sum = 0;
    int nine = 9;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for(int i = 1; i <= terms; i++)
    {
        printf("%d term = %d \n", i, nine);
        sum = sum + nine;
        nine = nine * 10 + 9;
    }

    printf("The sum of the series is %d.", sum);

    return 0;
}