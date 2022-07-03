# include <stdio.h>

void display();

int main()
{
    int row, column;

    printf("Enter how many rows you want in the array: ");
    scanf("%d", &row);

    printf("Enter how many columns you want in the array: ");
    scanf("%d", &column);
    printf("\n");

    int values[row][column];

    for(int a = 0; a < row; a++)
    {
        for(int b = 0; b < column; b++)
        {
        printf("Enter the %d element of %d row: ", b + 1, a + 1);
        scanf("%d", &values[a][b]);
        }
    }

    printf("\n");

    printf("You made the following array: values[%d][%d] \n", row, column);
    display(row, column, values);

    return 0;
}

void display(int r, int c, int dis[][c])
{
    for(int a = 0; a < r; a++)
    {
        for(int b = 0; b < c; b++)
        {
        printf("values[%d][%d] = %d \n", a, b, dis[a][b]);
        }
    }
}