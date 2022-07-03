# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to change the vowels to '*' in a string.

int main()
{
    char str[50];
    int i, l;

    printf("Enter the string: ");
    gets(str);

    l = strlen(str);

    for(i = 0; i < l; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        str[i] = '*';
    }

    puts(str);

    return 0;
}