# include <stdio.h>

int main()
{
    
    char *name;

    printf("Enter your name: ");
    gets(name);

    char *ptr = name;

    do
    {
        printf("%c", *ptr);
        ptr++;
    } while(*ptr != '\0');
    
    return 0;
}