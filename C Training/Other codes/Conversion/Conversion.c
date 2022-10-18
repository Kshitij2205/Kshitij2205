#include <stdio.h>
#include <windows.h>

#include "dec_to_bin.h" // Decimal to binary
#include "dec_to_oct.h" // Decimal to octal
#include "dec_to_hex.h" // Decimal to hexadecimal

#include "bin_to_dec.h" // Binary to decimal
#include "bin_to_oct.h" // Binary to octal
#include "bin_to_hex.h" // Binary to hexadecimal

#include "oct_to_dec.h" // Octal to decimal
#include "hex_to_dec.h" // Hexadecimal to decimal


void check_num(int *num)
{
    if (*num < 0 || *num > 1)
    {
        printf("Wrong input found !\n");
        exit(0);
    }
}

int main()
{
    int number;

    system("cls");

    printf("\t\t\t\t- Conversion of decimals and binary -\n\n");
    printf("1. Decimal to Binary ````\t");
    printf("4. Binary to Decimal ```\n");

    printf("2. Decimal to Octal `````\t");
    printf("5. Binary to Octal `````\n");
    
    printf("3. Decimal to Hexadecimal\t");
    printf("6. Binary to Hexadeciaml\n\n");

    printf("4. Octal to Decimal\t");
    printf("7. Hexadecimal to Decimal\n");

    printf("Choose a number from range 1 - 6 to perform any function: ");
    scanf("%d", &number);

    printf("\n");

    switch(number)
    {
        case 1:
            dec_to_bin();
            break;

        case 2:
            dec_to_oct();
            break;

        case 3:
            dec_to_hex();
            break;

        case 4:
            bin_to_dec();
            break;

        case 5:
            bin_to_oct();
            break;

        case 6:
            bin_to_hex();
            break;
    }

    printf("\n\nHave a nice day :v");
    
    return 0;
}
