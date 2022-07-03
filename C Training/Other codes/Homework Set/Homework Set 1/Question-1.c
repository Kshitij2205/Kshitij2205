# include <stdio.h>

// Program to calculate the perimeter of rectangle by the numbers given by the user.

int main()
{
    int a, b;

    printf("Enter the length of the rectangle: "); // First side
    scanf("%d", &a);

    printf("Enter the breadth of the rectangle: "); // Second side
    scanf("%d", &b);

    printf("The perimeter of the rectangle is %d.", 2 * (a + b));
    // Formula of perimeter = 2(a + b)
    // And we have to put '*' sign between 2(a + b).



    return 0;
}