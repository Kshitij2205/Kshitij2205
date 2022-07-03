# include <stdio.h>

// Program to create Simple Calculator using switch case.

int main()
{
    char opr;
    float num1, num2;

    printf("Enter the operator: ");
    scanf("%c", &opr);

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch(opr)
    {
        case '+':
            {
                printf("%0.3f + %0.3f = %0.3f", num1, num2, num1 + num2);
                break;
            }

        case '-':
            {
                printf("%0.3f - %0.3f = %0.3f", num1, num2, num1 - num2);
                break;
            }

        case '*':
            {
                printf("%0.3f * %0.3f = %0.3f", num1, num2, num1 * num2);
                break;
            }

        case '/':
            {
                printf("%0.3f / %0.3f = %0.3f", num1, num2, num1 / num2);
                break;
            }

        default:
            printf("Invalid operator entered !");
    }
    return 0;
}