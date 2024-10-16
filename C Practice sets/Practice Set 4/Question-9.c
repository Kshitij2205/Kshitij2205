// Repeat the previous questions using while loops.

#include <stdio.h>

int main()
{
    int num, sum, i;

    printf("Enter the number: ");
    scanf("%d", &num);

    sum = i = 1;

    while (i < num)
    {
        sum = sum * (i + 1);
        ++i;
    }

    printf("The factorial of %d is %d", num, sum);

    return 0;
}