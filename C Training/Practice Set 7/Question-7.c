# include <stdio.h>

void tables();

int main()
{
    int table[3][10];

    printf("Table of 2 ~~ \n");
    tables(table[0], 2);
    printf("~~~~~~~~~~~~~~~~ \n");

    printf("Table of 7 ~~ \n");
    tables(table[1], 7);
    printf("~~~~~~~~~~~~~~~~ \n");

    printf("Table of 9 ~~ \n");
    tables(table[2], 9);
    printf("~~~~~~~~~~~~~~~~ \n");

    printf("%d \n", table[0][0]);
    printf("%d \n", table[1][1]);
    printf("%d \n", table[2][2]);

    return 0;
}

void tables(int table[], int num)
{
    for(int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
        printf("%d x %d = %d \n", num, i + 1, table[i]);
    }
}