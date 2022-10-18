#include <stdio.h>
#include <stdlib.h>

void dec_to_oct()
{
    int num, copy;
    int remainder[100], rem = 0;

    printf("Enter the decimal number to convert it into octal: ");
    scanf("%d", &num);

    if(num <= 8)
    {
        printf("Octal representation of '%d' integer: %d", num, num);
        exit(0);
    }

    else
    {
        copy = num;

        while (copy > 8)
        {
            remainder[rem] = copy % 8;
            copy = copy / 8;

            if (copy <= 8)
            {
                rem++;
                remainder[rem] = copy;
            }

            rem++;
        }

        printf("Octal representation of '%d' integer: ", num);

        for (int i = rem - 1; i >= 0; i--)
                printf("%d", remainder[i]);
    }
}