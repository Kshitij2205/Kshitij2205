# include <stdio.h>
# include <string.h>
# include <windows.h>

int main()
{
    char str[50];
    int i, l;
    int count = 0;

    printf("Enter the string: ");
    gets(str);

    l = strlen(str);

    for(i = 0; i < l; i++)
    {
        for(k = 1; k < l; k++)
        {
            if(str[i] == str[k])
        }
    }

    return 0;
}