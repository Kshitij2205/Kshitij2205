# include <stdio.h>

int factorial(int x);

int main()
{
    int num;

    printf("Enter the number to print the factorial of it: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d.", num, factorial(num));


    return 0;
}

int factorial(int x)
{
    if(x == 0 || x == 1)
        return 1;

    else
    {
        int f = x * factorial(x - 1);
            return f;
    }
}