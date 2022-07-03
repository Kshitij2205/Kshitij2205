# include <stdio.h>

// Program to check if the given number is a natural number or not.

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num >= 1)
        printf("%d is a natural number.", num);

    else
        printf("%d is not a natural number.", num);

    return 0;
}