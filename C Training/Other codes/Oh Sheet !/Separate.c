# include <stdio.h>

// Write two separate programs to accept three numbers and find which one is greater. 
// (one using if statement and another using ternary operator)

int main()
{
    int a, b, c, sum;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("\n");

    (a > b && a > c) ? 
    printf("a is greater than is greater than b and c.") : printf("");

    (b > a && b > c) ?
    printf("b is greater than is greater than a and c.") : printf("");

    (c > a && c > b) ?
    printf("c is greater than is greater than a and b.") : printf("");

    return 0;
}