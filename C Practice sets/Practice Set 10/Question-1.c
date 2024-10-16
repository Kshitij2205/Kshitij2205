// Write a program to read three integers from a file.

#include <stdio.h>

int main()
{
    FILE *ptr;
    int one, two, three;

    ptr = fopen("Question-1.txt", "r");

    if (ptr == NULL)
        printf("Unable to open the file.\n");

    else
    {
        fscanf(ptr, "%d %d %d", &one, &two, &three);

        printf("%d %d %d\n", one, two, three);

        fclose(ptr);
    }

    return 0;
}