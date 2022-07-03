# include <stdio.h>

int main()
{
    float income;
    float tax;

    printf("Enter the income amount: Rs. ");
    scanf("%f", &income);
    printf("\n");

    if(income < 250000 && income >=0)
        printf("There is no income tax for below  Rs. 2.5 lakhs.");

    else if(income >= 250000 && income < 500000)
    {
        tax = income * 5/100;
        printf("Income tax rate: 5 percent \n");
        printf("Income tax to be paid: Rs. %0.2f", tax);
    }

    else if(income >= 500000 && income <= 1000000)
    {
        tax = income * 10/100;
        printf("Income tax rate: 10 percent \n");
        printf("Income tax to be paid: Rs. %0.2f", tax);
    }

    else if(income > 1000000)
    {
        tax = income * 30/100;
        printf("Income tax rate: 30 percent \n");
        printf("Income tax to be paid: Rs. %0.2f", tax);
    }

    return 0;
    
}