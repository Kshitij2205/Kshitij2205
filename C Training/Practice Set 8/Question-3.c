# include <stdio.h>
# include <string.h>

int num();

int main()
{
    char name[32];

    printf("Enter your name: ");
    gets(name);

    // int i = strlen(name);

    printf("Your name has %d characters.", num(name));    

    return 0;
}

int num(char name[])
{
    int i = 0;
    char *ptr = name;

    while(*ptr != '\0')
    {
        ptr++;
        i++;
    }
    
    return i;
}