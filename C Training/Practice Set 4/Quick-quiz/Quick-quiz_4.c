# include <stdio.h>

int main()
{

    int input;

    printf("Enter the value of n: ");
    scanf("%d", &input);

    for(int num = input; num > 0; num--)
    {
        printf("The number is %d\n", num);
    }
    return 0;

}