// Write a program using a function which calculates the sum and average of two numbers.
// Use pointers and print the values of sum and average in main()

#include <stdio.h>

void sum_average(float *num_1, float *num_2, float *sum,float *avg)
{
    *sum = *num_1 + *num_2;
    *avg = *sum / 2;
}

int main()
{
    float num_1, num_2, sum, avg;

    printf("Enter the first number: ");
    scanf("%f", &num_1);

    printf("Enter the second number: ");
    scanf("%f", &num_2);

    sum = avg = 0;

    sum_average(&num_1, &num_2, &sum, &avg);

    printf("The sum and average of the");
    printf("two given numbers are %.2f and %.2f.\n", sum, avg); 

    return 0;
}