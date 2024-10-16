// Write a program to count the number of occurence of a given character in a string. 

#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Kshitij";
    char letter = 'i';

    int end = strlen(name);
    int n = 0;

    for (int i = 0; i < end; i++)
    {
        if(letter == name[i])
            n++;
    }

    printf("There are %d letters in the given string !", n);

    return 0;
}