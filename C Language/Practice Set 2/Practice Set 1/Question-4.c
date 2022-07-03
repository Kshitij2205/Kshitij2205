# include <stdio.h>

int main(){

    float rate, time, principal;

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time: ");
    scanf("%f", &time);

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // The Formula of simple interest :V //
    float formula = (rate * time * principal) / 100;

    printf("\nThe Simple Interest is %f", formula);

    return 0;

}