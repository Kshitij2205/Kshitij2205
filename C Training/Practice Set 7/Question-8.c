# include <stdio.h>

void printtable();

int main()
{
    int multiply, table;

    printf("Enter the number of table that you want to print: ");
    scanf("%d", &table);

    printf("Enter how many times you want to print: ");
    scanf("%d", &multiply);

    printf("\n");

    int tables[0][multiply];

    printtable(multiply, table, tables);

    return 0;
}

void printtable(int m, int t, int tab[][m])
{
    for(int i = 0; i < m; i++)
    {
        tab[0][i] = t * (i + 1);
        printf("%d x %d = %d \n", t, i + 1, tab[0][i]);
    }
}