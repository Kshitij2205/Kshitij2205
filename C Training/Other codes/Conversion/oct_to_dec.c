#include <stdio.h>

int num_digit(int num, int *dig[50], int *inc)
{
    if(num < 10)
    {
        *dig[*inc] = num;
        return 0;
    }

    else
    {
        *dig[*inc] = num % 10;
        num = num / 10;
        *inc++;

        return num_digit();
    }
}

int main()
{
    int num, i = 0;
    int digit[50];

    printf("Enter the octal number to convert it into decimal: ");
    scanf("%d", &num);

    if(num <= 8)
        printf("Decimal/integer form of the octal number: %d", num);

    else
    {
        num_digit(num, &digit[50], &i);
        printf("%d", i);
    }



    return 0;
}