# include <stdio.h>

int main()
{
    int number, result;

    printf("Enter the number of table that you want to print: ");
    scanf("%d", &number);

    printf("The table of %d is as follows- \n", number);

    for(int multiply = 1; multiply <= 10; multiply++)
    {
        result = number * multiply;
        printf("\n %d x %d = %d", number, multiply, result);
    }

    return 0;
}