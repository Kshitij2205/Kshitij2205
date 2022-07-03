# include <stdio.h>

// Program to print total number of days in a month using switch case.

int main()
{
    int month;

    printf("Enter the number of month (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("31 \n");
            break;

        case 2:
            printf("30 \n");
            break;

        case 3:
            printf("31 \n");
            break;

        case 4:
            printf("30 \n");
            break;

        case 5:
            printf("31 \n");
            break;

        case 6:
            printf("30 \n");
            break;

        case 7:
            printf("31 \n");
            break;

        case 8:
            printf("31 \n");
            break;

        case 9:
            printf("30 \n");
            break;

        case 10:
            printf("31 \n");
            break;

        case 11:
            printf("30 \n");
            break;

        case 12:
            printf("31 \n");
            break;

        default:
            printf("bruh");
    }

    return 0;
}