// Write a program to change the value of a variable to ten times of its current value.
// Write a function and pass this value by reference. 

float ten (float *var)
{
    *var = (*var) * 10;
    return *var;    
}

#include <stdio.h>

int main()
{
    float var = 10.0;

    printf("Changed value: %.2f\n", ten(&var));

    return 0;
}