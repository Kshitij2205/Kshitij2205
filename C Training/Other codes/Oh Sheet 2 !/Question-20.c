# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to display the number in reverse order. (less information -_-)

int main()
{
    int num, first, second, third;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    first = num / 100; // To get 1-digit of the input..

    second = num % 100;
    second = second / 10; // To get 2-digit of the input..

    third = num % 100; // To get 3-digit of the input..
    third = third % 10;

    printf("You reversed input is %d%d%d.", third, second, first);

    return 0;
}