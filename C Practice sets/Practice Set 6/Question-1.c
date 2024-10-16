/* Write a program to print the address of a variable. 
   Use this address to get the value of this variable. */

#include <stdio.h>

int main()
{
    int num, *add;

    num = 5;

    add = &num;

    printf("The address of the variable num is %u.\n", add);
    printf("The address of the variable num is %p.\n", &num);
    printf("The value of the variable num is %d.\n", *add);
    printf("The value of the variable num is %d.\n", *(&num));

    return 0;
}