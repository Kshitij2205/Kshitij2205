// Write a program to encrypt a string by adding 1 to the ascii value of its characters.

#include <stdio.h>

int main()
{
    char name[10] = "abcd";

    int i = 0;
    
    while (name[i] != '\0')
    {
        name[i] = name[i] + 1;
        i++;
    }
    
    printf("Encrypted string is %s", name);

    return 0;
}