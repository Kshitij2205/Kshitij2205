# include <stdio.h> // This code wasn't that hard,
# include <string.h> // I just copy-pasted the -finding digits- code 
# include <windows.h> // From my previously made programs...

// Program to chck whether a given number is an armstrong or not.

// In case of an Armstrong number of 3 digits,
// The sum of cubes of each digit is equal to the number itself.
// For example: 153 = 1*1*1 + 5*5*5 + 3*3*3. Hence, 153 is an Armstrong number.

int main() 
{
    int num, arm_num;
    int first, second, third;
    int sum_1, sum_2, sum_3;

    printf("Enter a 3-digit number to check if its armstrong number or not: ");
    scanf("%d", &num);

    first = num / 100; // To get 1-digit of the input..

    second = num % 100; // To get 2-digit of the input...
    second = second / 10;

    third = num % 100; // To get 3-digit of the input...
    third = third % 10;

    sum_1 = first * first * first;
    sum_2 = second * second * second;
    sum_3 = third * third * third;

    arm_num = sum_1 + sum_2 + sum_3;

    if(arm_num == num)
        printf("%d is an armstrong number.", num);

    else
        printf("%d is not an armstrong number.", num);

    return 0;
}