# include <stdio.h>

// Program to check if the given number is digit or not.

int main()
{
    char num;

    printf("Enter any character: ");
    scanf("%c", &num);

    if(num >= 48 && num <= 57)
        printf("The character is a digit.");

    else   
        printf("The character is not a digit.");

    return 0;
}