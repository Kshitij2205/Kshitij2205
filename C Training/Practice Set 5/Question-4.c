# include <stdio.h>

void fibonacci();

int main()
{
    void fibonacci();

    printf("Presenting the fibonacci series !!! \n");

    return 0;
}

void fibonacci()
{
    int last;
    int increment = 0;
    int sum = 0;

    printf("Enter The last number of the fibonacci series: ");
    scanf("%d", &last);

    while(sum <= last)
    {
        sum = increment + sum;
        increment = sum + 1;

        printf("%d", sum);
         
    }
}