// Write a program to find out whether a student is pass or fail; 
// if it requires total 40% and at least 33% in each subject to pass.
// Assume 3 subjects and take marks as an input from the user.

#include <stdio.h>

int main()
{
    float english, hindi, computer, total;

    printf("Enter the marks in english: ");
    scanf("%f", &english);

    printf("Enter the marks in hindi: ");
    scanf("%f", &hindi);
    
    printf("Enter the marks in computer: ");
    scanf("%f", &computer);

    total = english + hindi + computer / 300 * 100;

    if (total >= 40 && english >= 33 && hindi >= 33 && computer >= 33)
        printf("You are passed !!!\n");

    else    
        printf("You are failed !!!\n");
    
    return 0;
}