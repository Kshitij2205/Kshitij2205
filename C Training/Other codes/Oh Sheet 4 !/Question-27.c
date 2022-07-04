# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to take the character after spaces from the string.

int main()
{
    char str[50];
    char store[10];
    int i, l, k;

    printf("Enter the string: ");
    gets(str);

    store[0] = str[0];

    l = strlen(str);
    store[0] = str[0];

    for(i = 1, k = 1; i < l; i++)
    {
        if(str[i] == ' ')
        {
            store[k] = str[i + 1];
            k++;
        }
    }

    printf("%s", strupr(store));

    return 0;
}
