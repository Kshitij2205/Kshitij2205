// Write a function to convert celsius temperature into fahrenheit.

float convert (float c)
{
    float fah;

    fah = (float)(c * 9 / 5) + 32;

    return fah;
}


#include <stdio.h>

int main()
{
    float cel = 0;

    printf("Celsius to fahrenheit: %.2f", convert(cel));

    return 0;
}