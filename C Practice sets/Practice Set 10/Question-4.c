/* Take name and salary of two employees as input from the user and write them to a text file in the following format:
    i.  Name1, 3300
    ii. Name2, 7700  */

struct employee
{
    char name[100];
    int salary;
} emp1, emp2;


#include <stdio.h>

int main()
{
    struct employee *ptr , *ptr2;

    ptr = &emp1;
    ptr2 = &emp2;

    printf("Enter the name of first employee: ");
    gets(ptr -> name);

    printf("Enter the salary of %s's employee: ", ptr -> name);
    scanf("%d", &(ptr -> salary));

    fflush(stdin);

    printf("Enter the name of second employee: ");
    gets(ptr2 -> name);

    printf("Enter the salary of %s's employee: ", ptr2 -> name);
    scanf("%d", &(ptr2 -> salary));

    FILE *format;

    format = fopen("Question-4.txt", "w");

    fprintf(format, "i.   %s, %d\n", ptr -> name, ptr -> salary);
    fprintf(format, "ii.  %s, %d\n", ptr2 -> name, ptr2 -> salary);

    fclose(format);

    return 0;
}