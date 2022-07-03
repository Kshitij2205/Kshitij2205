#include <stdio.h>

int main()
{
    int input, increment, sum = 1;

    printf("Enter the number to find its factorial: ");
    scanf("%d", &input);

    for (increment = 1; increment <= input; increment++)
    {
         sum = sum * increment; 
    }

    printf("\n The factorial of %d is %d", input, sum);

    return 0;
}