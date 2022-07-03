# include <stdio.h>
# include <string.h>
# include <windows.h>

int main()
{
    int i, terms;
    int first = 0;
    int second = 1;
    int store = 0;

    printf("Enter the number of terms to print the fibonacci series: ");
    scanf("%d", &terms);

    printf("1 term = 0 \n");
    printf("2 term = 1 \n");

    for(i = 3; i <= terms; i++)
    {
        store = first + second;
        first = second;
        second = store;

        printf("%d term = %d \n", i, store);
    }
    
    return 0;
}