// Write a program to decrypt a string encrypted in the previous question.

#include <stdio.h>

int main()
{
    char name[10] = "bcde";

    int i = 0;
    
    while (name[i] != '\0')
    {
        name[i] = name[i] - 1;
        i++;
    }
    
    printf("Encrypted string is %s", name);

    return 0;
}