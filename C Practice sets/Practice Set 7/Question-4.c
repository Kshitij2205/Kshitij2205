// Repeat the previous problem for a general input provided by the user using scanf.

#include <stdio.h>

int main()
{
    int num, table[10];

    printf("Enter the number of the table you want to print: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
        printf("%d * %d = %d\n", num, i + 1, table[i]);
    }


    return 0;
}