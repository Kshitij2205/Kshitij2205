// Create an array of size 3 x 10 containing multiplication tables of 2, 7 and 9 respectively. 

# include <stdio.h>

int main()
{
    int table[3][10];

    table[0][0] = 2;
    table[1][0] = 7;
    table[2][0] = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
            table[i][j] = table[i][0] * (j + 1);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
            printf("%2d ", table[i][j]);

        printf("\n");    
    }

    return 0;
}