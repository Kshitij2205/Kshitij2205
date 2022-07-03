# include <stdio.h>

// Program to display the first n terms of natural numbers.

int main()
{
    int n;

    printf("Enter the number of terms u want to print natural numbers: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)    
        printf("%d \n", i);

    return 0;
}