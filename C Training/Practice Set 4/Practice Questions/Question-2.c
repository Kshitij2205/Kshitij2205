# include <stdio.h>

int main()
{

    int number; 
    int increment = 10;

    printf("Enter the number to print the table: ");
    scanf("%d", &number);

    do
    {
        printf("%d * %d = %d \n", number, increment, number * increment);
        increment--;
    } 
    while(increment > 0);

    return 0;

}