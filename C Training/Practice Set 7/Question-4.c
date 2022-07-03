# include <stdio.h>

int main()
{
    int number, table[10];

    printf("Enter the number to print the table of it: ");
    scanf("%d", &number);

    printf("The table of %d is as follows- \n \n", number);

    for(int i = 0; i < 10; i++)
    {
        table[i] = number * (i + 1);
        printf("%d x %d = %d \n", number, i + 1, table[i]);
    }

    return 0;
}