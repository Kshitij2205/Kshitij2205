// Write a program to illustrate the use of arrow operator -> .

#include <stdio.h>

struct employee
{
    int num;
    char *ptr;
} e1;

int main()
{
    struct employee *ptr; 
    
    ptr = &e1; 

    ptr -> num = 12;
    ptr -> ptr = "bruh";

    printf("%s", ptr -> ptr);

    return 0;
}