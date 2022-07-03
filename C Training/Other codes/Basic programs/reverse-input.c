# include <stdio.h>

void reverse(int num, int *x, int *y, int *z);

int main()
{
    int a, b, c, number;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    reverse(number, &a, &b, &c);

    printf("You reversed input is %d%d%d.", c, b, a);

    return 0;
}

void reverse(int num, int *x, int *y, int *z)
{
    int first, second, third;

    first = num / 100; // To get 1-digit of the input..

    second = num % 100; // To get 2-digit of the input..
    second = second / 10;

    third = num % 100; // To get 3-digit of the input..
    third = third % 10;

    *x = first;
    *y = second;
    *z = third;
}