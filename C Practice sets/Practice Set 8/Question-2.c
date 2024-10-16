// Write a program to take string as an input from the user using %c and %s. Confirm that the strings are equal.

#include <stdio.h>
#include <string.h>

int main()
{
    char letter, name[8];

    printf("Enter your name: ");
    scanf("%s", name);

    fflush(stdin);

    int count = strlen(name);

    for (int i = 0; i < count; i++)
    {
        printf("Enter your name in letters: ");
        scanf("%c", &letter);

        fflush(stdin);

        if(letter == name[i])
            continue;

        else
        {
            printf("The strings are not equal !");
            break;
        }
    }

    return 0;
}