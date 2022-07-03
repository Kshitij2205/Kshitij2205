# include <stdio.h>

int main()
{
    int input, increment, output;
    int sum = 0;

    printf("Enter the table number to sum it up: ");
    scanf("%d", &input);

    for( increment = 1; increment <= 10; increment++ )
    {
        output = input * increment;
        printf(" %d * %d = %d \n", input, increment, output);
        sum = sum + output;
    }

    printf("The sum of %d table is %d", input, sum);

    return 0;

}