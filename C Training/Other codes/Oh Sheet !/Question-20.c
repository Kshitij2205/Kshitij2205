# include <stdio.h>

// Program to check whether a number is positive, negative or zero using switch case.

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    switch(num < 0)
    {
        case 1:
            printf("The input is a negative number. \n");
            break;

        case 0:
            switch(num > 0)
            {
                case 1:
                    printf("The input is a positive number. \n");
                    break;

                case 0:
                    printf("The input is a zero. \n");
                    break;
            }

    }
    return 0;
}