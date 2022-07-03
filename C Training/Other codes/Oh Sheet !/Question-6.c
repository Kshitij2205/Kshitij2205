# include <stdio.h>

// A computer salesman gets commsision on the following basis:

// Sales                Commission Rate

// Rs. 0-20,000                3%
// Rs. 20,000-50,000           12%
// Rs. 50,000 and more         31%

// After accepting the sales as input, Calculate and print his 
// commission amount and rate of commission.

int main()
{
    int sales;
    float amount = 0;

    printf("Enter your sales: Rs. ");
    scanf("%d", &sales);
    printf("\n");

    if(sales >= 0 && sales <= 20000)
    {
        amount = sales * 3/100;
        printf("Your commision rate is 3 percent. \n");
        printf("Your commission amount is Rs. %0.2f", amount);
    }

    else if(sales > 20000 && sales <= 50000)
    {
        amount = sales * 12/100;
        printf("Your commision rate is 12 percent. \n");
        printf("Your commission amount is Rs. %0.2f", amount);
    }

    else
    {
        amount = sales * 31/100;
        printf("Your commision rate is 31 percent. \n");
        printf("Your commission amount is Rs. %0.2f", amount);
    }
    return 0;
}