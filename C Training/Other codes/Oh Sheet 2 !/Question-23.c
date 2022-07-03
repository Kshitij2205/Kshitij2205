# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to find HCF (Highest Common Factor) of two numbers.

int main()
{
    int first, second, hcf;
    int num = 1;

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);
    printf("\n");

    while(num <= first && num <= second)
    {
        if(first % num == 0 && second % num == 0)
         hcf = num;

         num++;
    }

    printf("The H.C.F (Highest Common Factor) of %d and %d is %d.", first, second, hcf);

    return 0;
}