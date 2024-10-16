/* Write your own version of strcpy function from <string.h> */

#include <stdio.h>
#include <string.h>

void copy(char *source, char *target)
{
    int i = 0;

    for (; source[i] != '\0'; i++)
        target[i] = source[i];

    target[i] = '\0'; 
}

int main()
{
    char *source = "kshitij", target[50];

    copy(source, target);

    printf("String s1: %s\n", source);
    printf("String s2: %s\n", target);

    return 0;
}