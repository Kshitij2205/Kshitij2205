#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void bin_to_hex()
{
    int bin[50], hex[50], range;
    int inc = 0, sum = 0, exp = 0, start = 0;

    printf("Enter the total number of digits in the binary number: ");
    scanf("%d", &range);

    while (inc < range)
    {
        printf("Enter the %d digit of the binary number: ", inc + 1);
        scanf("%d", &bin[inc]);

        check_num(&bin[inc]);

        inc++;
    }

    printf("\nHexadecimal representation of the binary number: ");

    for (int i = inc - 1; i >= 0; i--)
    {
        if (bin[i] == 1)
            sum = pow(2, exp) + sum;

        exp++;

        if (exp == 4 || i == 0)
        {
            exp = 0;
            hex[start] = sum;
            start++;
            sum = 0;
        }
    }

    for (int i = start - 1; i >= 0; i--)
    {
        if (hex[i] < 10)
            printf("%d", hex[i]);

        else
        {
            switch (hex[i])
            {
            case 10:
                printf("A"); 
                break;

            case 11:
                printf("B");
                break;

            case 12:
                printf("C");
                break;

            case 13:
                printf("D");
                break;

            case 14:
                printf("E");
                break;

            case 15:
                printf("F");
                break;
            }
        }
    }
}


