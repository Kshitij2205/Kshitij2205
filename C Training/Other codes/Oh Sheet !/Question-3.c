# include <stdio.h>

// Write two separate programs to accept three numbers and find which one is greater. 
// (one using if statement and another using ternary operator)

int main()
{
    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    if(a > b && a > c)
        printf("%d is the greatest number among the 3 numbers.", a);

    else if(b > a && b > c)
        printf("%d is the greatest number among the 3 numbers.", b);

    else if(c > a && c > b)
        printf("%d is the greatest number among the 3 numbers.", c);

    return 0;
}