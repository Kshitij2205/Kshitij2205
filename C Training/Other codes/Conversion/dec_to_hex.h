#include <stdio.h>
#include <stdlib.h>

void dec_to_hex()
{
    int num, copy;
    int remainder[100], rem = 0;

    printf("Enter the decimal number to convert it into hexadecimal: ");
    scanf("%d", &num);

    if(num <= 16)
    {
        printf("Hexadecimal representation of '%d' integer: %d", num, num);
        exit(0);
    }

    else
    {
        copy = num;

        while (copy > 16)
        {
            remainder[rem] = copy % 16;
            copy = copy / 16;

            if (copy <= 16)
            {
                rem++;
                remainder[rem] = copy;
            }

            rem++;
        }

        printf("Hexadecimal representation of '%d' integer: ", num);

        for (int i = rem - 1; i >= 0; i--)
                printf("%d", remainder[i]);
    }
}