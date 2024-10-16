// Create a two dimensional vector using structures.

#include <stdio.h>

struct employee
{
    int num;
    char *ptr;
};

int main()
{
    struct employee emp;

    emp.num = 12;
    emp.ptr = "bruh";

    printf("%s", emp.ptr);  

    return 0;
}