# include <stdio.h>

// Program to check whether a character is uppercase or lowercase alphabet.

int main()
{
    char num = 'a';

    if(num >=65 && num <= 90)
        printf("The character is uppercase.");

    else if(num >= 97 && num <= 122)
        printf("The character is in lowercase.");

    else    
        printf("It is a a special character.");

    return 0;
}