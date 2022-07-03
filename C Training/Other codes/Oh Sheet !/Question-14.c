# include <stdio.h>

// Program to check whether the triangle is 
// Equilateral, isosceles or scalene triangle.

int main()
{
    int a = 6;
    int b = 6;
    int c = 6;

    if(a == b && a == c )
        printf("It's an equilateral triangle");

    else if(a == b || a == c || b == c)
        printf("It's an isosceles triangle");

    else if(a != b && a != c)
        printf("It's a scalene triangle");

    return 0;
}