/* Write a program to generate multiplication table of a given number in text format.
   Make sure that the file is readable and well formatted. */

#include <stdio.h>

int main()
{
    int num, inc, output;
    FILE *table;

    printf("Enter the number to print the table of it: ");
    scanf("%d", &num);

    table = fopen("Question-2.txt", "w");

    for (inc = 1; inc <= 10; inc++)
    {
        output = num * inc;
        fprintf(table, "%d x %d = %d\n", num, inc, output);
    }

    fclose(table);

    return 0;
}