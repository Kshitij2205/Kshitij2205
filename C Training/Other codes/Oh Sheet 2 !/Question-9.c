# include <stdio.h>

// Program to display the n terms of harmonic series and their sum.

// (1 + 1/2 + 1 + 1/3 + 1/4 + 1/n )

int main()
{
    int n;
    float sum = 0;
    float j = 1;

    printf("Enter the number of terms to print the harmoinc series: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d term = %0.3f \n", i, j);
        sum = sum + j;
        j = (float) 1/(i + 1);
    }

    printf("The sum of %d terms of harmonic series is %f.", n, sum);

    return 0;
}