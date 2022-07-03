# include <stdio.h>

float Temperature();

int main()
{
    float fahrenheit = Temperature();

    printf("The new temperature is %f", fahrenheit);
    
    return 0;
}

float Temperature()
{
    float celsius;

    printf("Enter the temperature of your room : ");
    scanf("%f", &celsius);

    float change = (celsius * 9/5) + 32;
    return change;
}