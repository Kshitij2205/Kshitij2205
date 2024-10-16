// Write a program using functions to find average of 3 numbers. 

#include <stdio.h>

float average(float a, float b, float c)
{
    float avg;

    avg = (a + b + c) / 3;
    
    return avg;
}

int main()
{
    float num_1, num_2, num_3;

    printf("Enter the first number: ");
    scanf("%f", &num_1);

    printf("Enter the second number: ");
    scanf("%f", &num_2);

    printf("Enter the third number: ");
    scanf("%f", &num_3);

    printf("The average of 3 given numbers is %0.2f.\n", average(num_1, num_2, num_3));

    return 0;
}