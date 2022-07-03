#include <stdio.h>

int main()
{

    int input;
    int increment = 1;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &input);

    while (increment <= input)
    {
        sum = sum + increment;
        increment++;
    }

    printf("The sum of first %d natural numbers are: %d", input, sum);

    return 0;
}