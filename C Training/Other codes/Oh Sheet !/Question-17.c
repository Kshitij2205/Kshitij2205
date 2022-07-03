# include <stdio.h>

// Program to print day of week name using switch case.

int main()
{
    int num;

    printf("Enter number between 1-7: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("Day of week: Monday \n");
            break;

        case 2:
            printf("Day of week: Tuesday \n");
            break;

        case 3:
            printf("Day of week: Wednesday \n");
            break;

        case 4:
            printf("Day of week: Thursday \n");
            break;

        case 5:
            printf("Day of week: Friday \n");
            break;

        case 6:
            printf("Day of week: Saturday \n");
            break;

        case 7:
            printf("Day of week: Sunday \n");
            break;

        default:
            printf("Please enter the number between 1 and 7 !");
            break;
    }
    return 0;
}