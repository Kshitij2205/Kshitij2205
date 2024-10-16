// Repeat the previous problem for a custom given input by the user.

# include <stdio.h>

int main()
{
    int num, table[10];

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
        printf("%2d x %2d = %2d\n", num, i + 1, table[i]);
    }

    return 0;
}