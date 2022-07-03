# include <stdio.h> // How tf is this wrong ?!?!?
# include <string.h>
# include <windows.h>

// Program to check whether a given number is prime or not.

int main()
{
    int i, num;
    int f;

    printf("Enter the number to check if its prime or not: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            f = 1;
            break;
        }
    }

    if(f == 1)
        printf("%d is not a prime number.", num);

    else
        printf("%d is a prime number.", num);
    return 0;
}