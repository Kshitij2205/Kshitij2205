#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter The Marks of Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("The marks of the 5 students are as follows -\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Student %d: %d \n", i + 1, marks[i]);
    }
    return 0;
}