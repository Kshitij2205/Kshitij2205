/* Write a program to calculate area of a rectangle:

(a) using hard coded inputs
(b) using inputs supplied by the user */

#include <stdio.h>

int main()
{
    float area, length, breadth;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of th rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("The area of the rectangle is %0.2f.\n", area);

    return 0;
}