# include <stdio.h>

// Program to calculate the cube of the number given by the user.

int main()
{
    int n;

    printf("Enter the number: "); // Number taken from user
    scanf("%d", &n);

    printf("The cube of %d is %d.", n, n * n * n);
    // Cube of n = n * n * n.
    return 0;
}