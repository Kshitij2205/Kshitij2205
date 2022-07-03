# include <stdio.h>

// Program to input any character and check whether 
// It is alphabet, digit or special character.

int main()
{
    char type;

    printf("Enter any character: ");
    scanf("%c", &type);

    if((type >= 65 && type <= 90) || (type >= 97 && type <= 122))
        printf("The charater entered is an alphabet.");

    else if(type >= 48 && type <=57)
        printf("The character entered is a number.");

    else
        printf("The character entered is a special one.");

    return 0;
}