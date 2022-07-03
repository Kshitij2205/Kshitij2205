# include <stdio.h>

int main()
{
    char input;

    printf("Enter the character: ");
    scanf("%c", &input);
    printf("\n");

    if(input >= 97 && input <= 122)
    {
        printf("The character '%c' is lowercase.\n", input);
        printf("The ASCII value of the character is %d.", input);
    }
    else
    {
        printf("The character '%c' is not lowercase.\n", input);
        printf("The ASCII value of the character is %d.", input);
    }

    return 0;
}