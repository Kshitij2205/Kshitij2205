// Write a program with a structure representing a complex number.

#include <stdio.h>

struct complex
{
    int num1, num2;
} c1;

int main()
{
    c1.num1 = 4;
    c1.num2 = 3;

    printf("%d\n", c1.num1 + c1.num2);

    return 0;
}