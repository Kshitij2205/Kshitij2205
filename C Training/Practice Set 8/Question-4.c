# include <stdio.h> // Confussed :/
# include <string.h>
# include <windows.h>

void slice();

int main()
{
    int m = 1;
    int n = 0;
    char str[] = "Kshitij";

    char *ptr = str;

    while(*ptr != '\0')
    {
        n++;
        ptr++;
    }

    slice(str, 1, 7);

    printf("%s", str);

    return 0;
}

void slice(char str[],int start,int end)
{
    int i = 0;

    while((start + i) < end)
    {
        str[i] = str[i + 1];
        i++;
    }
    str[i] = '\0';
}