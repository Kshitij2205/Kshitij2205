# include <stdio.h>

int main() // wrong
{

    int number, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    while ( sum < 1)
        if(number % 2 == 0)
    {
        printf("%d is a not prime number", number);
        break;
    }
    else
    {
        printf("%d is a prime number", number);
        break;
    }
    return 0;

}