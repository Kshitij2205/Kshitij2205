# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to check whether a number is palindrome or not.

// A palindromic number is a number (such as 16461) 
// That remains the same when its digits are reversed.


int main()
{
    int num, first, second, third, fourth, fifth, sixth;

    printf("Enter a (2 or 3 digit) number: ");
    scanf("%d", &num);

    if(num >= 10 && num <= 99)
    {
        first = num / 10;

        second = num % 10;

        if(first == second)
            printf("%d is a palindrome number.", num);

        else   
            printf("%d is not a palindrome number.", num);
    }
    if(num >= 100 && num <= 999)
    {
        first = num / 100;

        second = num % 100;
        second = second / 10;

        third = num % 100;
        third = third % 10;

        if(first == third)
            printf("%d is a palindrome number.", num);

        else   
            printf("%d is not a palindrome number.", num);
    }

    return 0;
}