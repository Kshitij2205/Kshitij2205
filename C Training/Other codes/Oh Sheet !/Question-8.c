# include <stdio.h>

// The telephone department wishes to compute monthly telephone bills for it.
// Customers using the following rules.

// Minimum Rs. 250 for first 80 message units, 
// plus 60 paise per unit for next 60 units,
// plus 50 paise per unit for 60 units,
// plus 40 paise per unit for any units above 200.

// Program that calculates monthly bill,
// With input MESSAGE (the number of message units)
// And CUSTNO (the registration number of a customer).

// Then display the bill in following format.

// CUSTOMER NO:
// MESSAGE UNITS:
// AMOUNT (Rs.):

int main()
{
    int units, no;
    float amount;

    printf("Enter Customer number: ");
    scanf("%d", &no);

    printf("Enter the message units: ");
    scanf("%d", &units);
    printf("\n");

    if (units <= 80)
        amount = 250;

    else if(units > 80 && units <= 140)
        amount = 250 + ((units - 80) * 0.60);

    else if(units > 140 && units <= 200)
        amount = 250 + ((units - 80) * 0.60) + ((units - 140) * 0.50);

    else if(units > 200)
        amount = 250 + ((units - 80) * 0.60) + ((units - 140) * 0.50) + ((units - 200) * 0.40);

        printf("CUSTOMER NO: %d \n", no);
        printf("MESSAGE UNITS: %d \n", units);
        printf("AMOUNT (Rs.): %0.2f", amount);


    return 0;
}