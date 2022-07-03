# include <stdio.h>

int main()
{
    
    int input;

    printf("Enter the value of n: ");
    scanf("%d", &input);

    for(int num = 1; num <= input; num++)
    {
        printf("The number is %d\n", num);
    }
    return 0;

}