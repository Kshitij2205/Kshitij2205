# include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("Enter the fourth number: ");
    scanf("%d", &d);

    if(a > b && a > b && a > c && a > d)
        printf("%d is the greatest number among the 4 numbers.", a);

    else if(b > a && b > c && b > d)
        printf("%d is the greatest number among the 4 numbers.", b);

    else if(c > a && c > b && c > d)
        printf("%d is the greatest number among the 4 numbers.", c);

    else if(d > a && d > b && d > c)
        printf("%d is the greatest number among the 4 numbers.", d);
    return 0;
}