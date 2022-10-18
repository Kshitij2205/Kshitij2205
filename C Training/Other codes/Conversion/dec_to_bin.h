#include <stdio.h>

// Literally made this program after pancacking my brain for 4 hours
// --insert creative line here--

void dec_to_bin() 
{
    int num, copy, remainder[50];
    int rem = 0, inc = 0;

    printf("Enter the decimal number to convert it into binary: ");
    scanf("%d", &num);

    copy = num;

    if (num < 0)
        printf("Dude, binary representation of negative integers doesn't exist !!!\n");
        // That's what she said

    else if (num == 0)
        printf("Binary representation of '%d' integer: 0\n", num);

    else if (num == 1)
        printf("Binary representation of '%d' integer: 1\n", num);

    else
    {
        while (copy > 1)
        {
            remainder[rem] = copy % 2;
            copy = copy / 2;

            if (copy == 1)
            {
                rem++;
                remainder[rem] = 1;
            }

            rem++;
        }
    }

        printf("Binary representation of '%d' integer: ", num);

        for (int i = rem - 1; i >= 0; i--)
            printf("%d", remainder[i]);
}