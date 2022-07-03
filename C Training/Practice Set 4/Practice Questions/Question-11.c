# include <stdio.h>

int main()
{

    //  This is wrong code :V

    int number, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    do
    {
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
    } while (sum < 1);

    int input, add = 0;

    printf("\n Enter the number: ");
    scanf("%d", &input);

    for(add = 0; input > 0; )
    
    if(input % 2 == 0)
    {
        printf("%d is a not prime number", input);
        break;
    }
    else
    {
        printf("%d is a prime number", input);
        break;
    }

    return 0;

}