// Write a program to find the greatest of four numbers entered by the user.

#include <stdio.h>

int main()
{
    float first, second, third, four;

    printf("Enter the first number: ");
    scanf("%f", &first);

    printf("Enter the second number: ");
    scanf("%f", &second);

    printf("Enter the third number: ");
    scanf("%f", &third);

    printf("Enter the four number: ");
    scanf("%f", &four);

    if (first > second && first > third && first > four)
        printf("%0.2f is the greatest number among the four given numbers.\n", first);

    else if (second > first && second > third && second > four)
        printf("%0.2f is the greatest number among the four given numbers.\n", second);

    else if (third> first && third > second && third > four)
        printf("%0.2f is the greatest number among the four given numbers.\n", third);

    else if (first > four && four > second && four > third)
        printf("%0.2f is the greatest number among the four given numbers.\n", four);

    else
        printf("One of the numbers is equal to another number.\n");

    return 0;
}