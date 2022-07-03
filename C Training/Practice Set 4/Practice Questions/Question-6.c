#include <stdio.h>

int main()
{

    int input, increment;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &input);

    for (increment = 0; increment <= input; increment++)
    {
        sum = sum + increment;
    }
    printf("The sum of first %d natural numbers is %d", input, sum);

    int input_2; 
    int increment_2 = 1;
    int sum_2 = 0;

    printf("\n Enter the value of n: ");
    scanf("%d", &input_2);

    do
    {
        sum_2 = sum_2 + increment_2;
        increment_2++;
    }
    while(increment_2 <= input_2);

    printf("The sum of first %d natural numbers is %d", input_2, sum_2);

    return 0;
}