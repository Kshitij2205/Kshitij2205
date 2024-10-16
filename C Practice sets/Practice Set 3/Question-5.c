// Write a program to determine whether a character entered by the user is lowercase or not. 

#include <stdio.h>

int main()
{
    char letter;

    printf("Enter the character: ");
    scanf("%c", &letter);

    if (letter >= 65 && letter <= 90)
        printf("The character %c is in uppercase.\n", letter);

    else if (letter >= 90 && letter <= 122)
        printf("The character %c is in lowercase.\n", letter);
        
    else
        printf("The character %c is neither in uppercase nor in lowercase.\n", letter);

    return 0;
}