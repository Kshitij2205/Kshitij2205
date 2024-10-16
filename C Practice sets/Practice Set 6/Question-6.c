// Try problem 3 using call by value and verify that it doesn't change the value of the said variable.

float ten (float var)
{
    var = var * 10;
    return var;    
}

#include <stdio.h>

int main()
{
    float var = 2.00;

    printf("Copied value: %.2f\n", ten(var));
    printf("Real value of the variable: %.2f\n", var);

    return 0;
}