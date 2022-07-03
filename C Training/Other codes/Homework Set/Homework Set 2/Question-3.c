# include <stdio.h>

// Program to print the smallest number of two.

int main()
{
    int a = 5;
    int b = 6;

    if(a < b)
        printf("%d is the smallest number among the two.", a);

    else if(b < a)
        printf("%d is the smallest number among the two.", b);

    else  
        printf("The number are same !");

    return 0;
}