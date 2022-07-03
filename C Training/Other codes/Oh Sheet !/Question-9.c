# include <stdio.h>

// Program to input the code of a particular item, quantity purchased and rate.

// Then calculate the purchased price and print it along with gift to be presented.
// The gifts to the customers are given in the following manner:

// Amount of Purchase (Rs.)             Gift

// Between 100 to 500                 A key ring
// Between 500 to 1000               A leather purse
// Above 1000                       A pocket calculator

int main()
{
    int code, quantity, rate, cost;

    printf("Enter the code for the item: ");
    scanf("%d", &code);

    printf("Enter the quantity of the purchased item: ");
    scanf("%d", &quantity);

    printf("Enter the rate of the item (in Rs.): ");
    scanf("%d", &rate);
    printf("\n");

    cost = rate * quantity;

    if(cost < 100)
        printf("Your total cost is %d.", cost);

    else if(cost >= 100 && cost <=500)
    {
        printf("Your total cost is %d. \n", cost);
        printf("Your gift is a key ring.");
    }

    else if(cost > 500 && cost <=1000)
    {
        printf("Your total cost is %d. \n", cost);
        printf("Your gift is a leather purse.");
    }

    else if(cost > 1000)
    {
        printf("Your total cost is %d. \n", cost);
        printf("Your gift is a pocket calculator.");
    }

    return 0;
}