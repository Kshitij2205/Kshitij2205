// Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main()
{
    int num, table, inc;
    int store[10];

    printf("Enter the number which you want the table of: ");
    scanf("%d", &num);

    for (inc = 0; inc < 10; inc++)
    {
        store[inc] = num * (inc + 1);

        printf("%d x %d = %d\n", num, inc + 1, store[inc]);
    }




    return 0;
}