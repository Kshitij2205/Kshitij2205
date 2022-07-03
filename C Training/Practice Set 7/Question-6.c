#include <stdio.h>

int count(); // Also, is 0 negative or positive !?!?!

int main()
{
    int positive_num = 0;
    int negative_num = 0;
    int elements = 0;
    
    printf("Enter how many elements you want in the array: ");
    scanf("%d", &elements);

    printf("\n");

    int numbers[elements];

    for(int i = 0; i < elements; i++)
    {
        printf("Enter the %d element of the array: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\n \n");

    printf("You made the following array: ");
    printf("numbers[%d] \n \n", elements);

    for(int i = 0; i < elements; i++)
    {
        printf("%d element: %d\n",i + 1, numbers[i]);
    }
    printf("\n");

    count(numbers, elements, &positive_num, &negative_num);

    printf("There are %d positive integers in the array. \n", positive_num);
    printf("There are %d negative integers in the array. \n", negative_num);

    return 0;
}

int count(int i[], int total,int *p, int *n)
{
    for (int e = 0; e < total; e++)
    {
        if (i[e] < 0)
        {
            *n+= 1; // n++ also doesn't work ;-;
            continue;
        }
        *p += 1; // *p++ doesn't work in this, idk why ;-; SEARCH ABOUT IT !
    }
}