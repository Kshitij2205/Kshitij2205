# include <stdio.h>

// Program to display the sum of the series [1 + 11 + 111 + 1111 + ...]

int main()
{
    int terms;
    int sum = 0;
    int one = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for(int i = 1; i <= terms; i++)
    {
        printf("%d term = %d \n", i, one);
        sum = sum + one;
        one = one * 10 + 1;
    }

    printf("The sum of the series is %d.", sum);

    return 0;
}