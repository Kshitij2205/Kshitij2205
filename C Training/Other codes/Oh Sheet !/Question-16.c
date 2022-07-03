# include <stdio.h>

// Program to input electricity  unit charges and 
// Calculate total electricity bill according to the given condition:

// For first 50 units Rs. 0.50 / unit
// For next 100 units Rs. 0.75 / unit
// For next 100 units Rs. 1.20 / unit
// For unit above 250 Rs. 1.50 / unit

int main()
{
    int unit;
    float bill;

    printf("Enter the electricty unit: ");
    scanf("%d", &unit);

    if(unit <= 50)
        bill = unit * 0.50;

    else if(unit > 50 && unit <= 150)
        bill = (unit * 0.50) + ((unit - 50) * 0.75);

    else if(unit > 150 && unit <= 250)
        bill = (unit * 0.50) + ((unit - 50) * 0.75) + ((unit - 150) * 1.20);

    else if(unit > 250)
        bill = (unit * 0.50) + ((unit - 50) * 0.75) + ((unit - 150) * 1.20) + ((unit - 250) * 1.50);

    printf("Your bill is %f.", bill);
    

    return 0;
}