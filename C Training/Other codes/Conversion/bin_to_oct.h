#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void bin_to_oct()
{
    int bin[50], oct[50], range;
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

    printf("\nOctal representation of the binary number: ");

    for (int i = inc - 1; i >= 0; i--)
    {
        if (bin[i] == 1)
            sum = pow(2, exp) + sum;

        exp++;

        if (exp == 3 || i == 0)
        {
            exp = 0;
            oct[start] = sum;
            start++;
            sum = 0;
        }
    }

    for (int i = start - 1; i >= 0; i--)
            printf("%d", oct[i]);
}


