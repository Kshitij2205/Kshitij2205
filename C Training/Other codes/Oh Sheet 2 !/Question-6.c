# include <stdio.h>

// Program to display the n terms of odd natural number and their sum.

int main()
{
    int n;
    int sum = 0;
    int odd = 1;

    printf("Enter the number of terms to print the odd numbers: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
       printf("%d \n", odd);
       sum = sum + odd;
       odd = odd + 2;
    }

    printf("The sum of the odd numbers is %d. ", sum);

    return 0;
}