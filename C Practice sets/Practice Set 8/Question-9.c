// Write a program to check whether a given character is present in the string or not.

#include <stdio.h>

int main()
{
    char *name = "Kshitij";
    char ch;

    int flag = 0;

    printf("Enter the character: ");
    scanf("%c", &ch);

    for(int i = 0; name[i] != '\0'; i++)
    {
        if (ch == name[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%c is not present in the given string !", ch);

    else if(flag == 1)
        printf("%c is present in the string !", ch);

    return 0;
}