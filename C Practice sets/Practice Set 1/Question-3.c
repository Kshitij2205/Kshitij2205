// Write a program to convert Celsius (Centigrade degrees temperature) to farenheit.

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter the temperature in celsius degree: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius / 5) + 32;

    printf("The temperature in fahrenheit is %0.2f degree.\n", fahrenheit);





    return 0;
}