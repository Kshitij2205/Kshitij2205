# include <stdio.h>

int Sum_average();

int main()
{
    int first, second;
    int sum;
    float average;

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    Sum_average(first, second, &sum, &average);

    printf("The sum of the two numbers is %d \n", sum);
    printf("The average of the two numbers is %0.1f \n", average);

    return 0;
}

int Sum_average(int a, int b, int *sum, float *average)
{
    *sum = a + b;
    *average = (float)*sum / 2;
}