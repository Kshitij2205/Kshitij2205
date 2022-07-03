# include <stdio.h>
# include <string.h>
# include <windows.h> // wrong

// Program to take the character after spaces from the string.

int main()
{
    char str[50];
    char store[4];
    int i, l;

    printf("Enter the string: ");
    gets(str);

    l = strlen(str);
    store[0] = str[0];

    for(i = 1; i < l; i++)
    {
        if(str[i] == ' ')
            store[i] = str[i + 1];
    }

    printf(store);
    

    return 0;
}