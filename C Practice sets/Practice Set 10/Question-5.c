/* Write a program to modify a file containing an integer to double its value. */

#include <stdio.h>

int main()
{
    int val;

    FILE *ptr;

    ptr = fopen("Question-5.txt", "r");
    fscanf(ptr, "%d", &val);

    ptr = fopen("Question-5.txt", "w");
    fprintf(ptr, "%d", 2 * val);

    return 0;
}