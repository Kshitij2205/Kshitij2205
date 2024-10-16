/* Write a program to read a text file character by character and 
   write it's content twice in a separate file. */
   
#include <stdio.h>

int main()
{
    char chr;
    int i = 0;

    FILE *sample, *written;
    sample = fopen("sample.txt", "r");
    written = fopen("written.txt", "w");

    while(1)
    {
        chr = fgetc(sample);

        if(chr == EOF)
            break;

        else
        {
            fprintf(written, "%c", chr);
            fprintf(written, "%c", chr);
            printf("%c", chr);
        }
    }

    fclose(sample);
    fclose(written);

    return 0;
}