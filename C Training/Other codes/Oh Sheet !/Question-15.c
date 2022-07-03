# include <stdio.h>

// Program to calculate profit and loss.

int main()
{
    int sell;
    int cost;
    float profit, loss;

    printf("Enter the selling price: Rs. ");
    scanf("%d", &sell);

    printf("Enter the cost price: Rs. ");
    scanf("%d", &cost);
    printf("\n");

    profit = sell - cost;
    profit = (profit / cost) * 100;

    loss = cost - sell;
    loss = (loss / cost) * 100;

    if(profit > 0)
        printf("Profit (in percentage): %0.2f \n", profit);

    else if(loss < 0)
        printf("Loss (in percentage): %0.2f", loss);

    else if(profit == 0 || loss == 0)
        printf("You gained no profit and no loss.");

    return 0;
}