# include <stdio.h>

// Program to check whether an alphabet is vowel or consonant using switch case.

int main()
{
    char input;

    printf("Enter the character (1-26, lowercase): ");
    scanf("%c", &input);

    switch(input)
    {
        case 97:
            printf("The letter entered is vowel. \n");
            break;

        case 101:
            printf("The letter entered is vowel. \n");
            break;

        case 105:
            printf("The letter entered is vowel. \n");
            break;

        case 111:
            printf("The letter entered is vowel. \n");
            break;

        case 117:
            printf("The letter entered is vowel. \n");
            break;

        default:
            printf("The letter entered is an alphabet and a consonant.");
    }    

    return 0;
}