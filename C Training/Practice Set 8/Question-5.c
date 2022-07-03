# include <stdio.h>
# include <string.h>
# include <windows.h>

int main()
{
    int i, l;
    char str[100];

    printf("Enter the string: ");
    gets(str);

    l = strlen(str);

    char copy[l];

    for(i = 0; i < l; i++)
        copy[i] = str[i];

    printf("Copied string: ");
    printf("%s", copy);

    return 0;
}