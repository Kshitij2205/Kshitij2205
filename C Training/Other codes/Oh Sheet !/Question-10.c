# include <stdio.h>

// Program to take the monthly salary from the user, 
// Find and display income tax with the help of the following slab:

// Monhly Salary            Income Tax

// 8000 or less                 N-I-L
// 8000 - 9000              20% of the Monthly Salary
// 9000 - 10000             30% of the Monthly Salary
// 10000 or above           40% of the Monthly Salary

int main()
{
    int salary;
    float tax;

    printf("Enter your monthly salary: Rs. ");
    scanf("%d", &salary);
    printf("\n");

    if(salary <= 8000)
    {
        printf("Income tax rate: 0 percent \n");
        printf("Income tax : Rs. 0");    
    }

    else if(salary > 8000 && salary <= 9000)
    {
        tax = salary * 20/100;
        printf("Income tax rate: 20 percent \n");
        printf("Income tax : Rs. %0.2f", tax);    
    }

    else if(salary > 9000 && salary < 10000)
    {
        tax = salary * 30/100;
        printf("Income tax rate: 30 percent \n");
        printf("Income tax : Rs. %0.2f", tax);    
    }

    else if(salary >= 10000)
    {
        tax = salary * 40/100;
        printf("Income tax rate: 40 percent \n");
        printf("Income tax : Rs. %0.2f", tax);    
    }
    return 0;
}