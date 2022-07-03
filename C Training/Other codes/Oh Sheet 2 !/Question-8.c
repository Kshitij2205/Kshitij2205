# include <stdio.h>

// Program to display the n terms of even natural number and their sum.

int main()
{
    int n;
    int sum = 0;
    int even = 2;

    printf("Enter the number of terms to print the even numbers: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
       printf("%d \n", even);
       sum = sum + even;
       even = even + 2;
    }

    printf("The sum of the even numbers is %d. ", sum);


    return 0;
}