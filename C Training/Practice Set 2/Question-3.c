# include <stdio.h>

int main(){

    int The_number;

    printf("Enter the value to check whether \nThe given number is divisble by 97 or not: ");
    scanf("%d", &The_number);

    int formula = The_number % 97;

    printf("\nThe Divisibility test return: %d", formula);

    return 0;

}