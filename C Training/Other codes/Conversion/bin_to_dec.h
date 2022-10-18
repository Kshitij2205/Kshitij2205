#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void bin_to_dec()
{
    int range;
    int bin[100];
    int inc = 0, exp = 0, decimal = 0;

    printf("Enter the total number of digits in the binary number: ");
    scanf("%d", &range);

    while (inc < range)
    {
        printf("Enter the %d digit of the binary number: ", inc + 1);
        scanf("%d", &bin[inc]);

        check_num(&bin[inc]);

        inc++;
    }

    for(int i = inc - 1; i >= 0; i--)
    {
        if(bin[i] == 1)
            decimal = pow(2, exp) + decimal;

        exp++;
    }

    printf("\nDecimal/integer form of the binary number: %d", decimal);
}