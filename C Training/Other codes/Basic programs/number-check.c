# include <stdio.h>

// Program to check whether the given number is positive or negative.

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("The number entered is positive.");

    else if(num < 0)
        printf("The number entered is negative.");

    else
        printf("The number entered is 0 cuz its neither positive nor negative.");

    return 0;
}