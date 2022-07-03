# include <stdio.h>

int main(){

    float Celsius;

    printf("Enter the celsius value to convert it to fahrenheit temperature: ");
    scanf("%f", &Celsius);

    // Formula to Convert Celsius temperature to fahrenheit degree //

    float formula = (Celsius * 9/5) + 32;

    printf("\nThe value converted to fahrenheit temperature is %f",formula);

    return 0;

}

