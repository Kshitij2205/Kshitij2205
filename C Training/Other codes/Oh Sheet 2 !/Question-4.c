# include <stdio.h>

int main()
{
    int arr[10];
    float average = 0;
    int sum = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Enter the %d number: ",i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float) sum / 10;

    printf("The sum of the 10 numbers is %d. \n", sum);
    printf("The average of the 10 numbers is %0.2f. \n", average);

    return 0;
}