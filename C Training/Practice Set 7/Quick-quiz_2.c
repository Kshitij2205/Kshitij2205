# include <stdio.h>

int main()
{

    int i = 5;
    int *k = &i;
    
    printf("Value of i: %d \n \n", *k);
    printf("Original address of i: %u \n", k);

    printf("Address of i after adding 1: %u \n", k + 1); // Addition of a number to a pointer
    printf("Address of i after subtracting 1: %u \n \n", k - 1); // Subtraction of a number to a pointer
    
    int j = 10;
    int *l = &j;

    printf("Original address of j: %u \n", l++);

    int z = k - l; // Subtration of one pointer from another

    printf("Subtracting pointer from a pointer[ k - l]: %u \n \n", z);

    int num = 20;
    int number = 30;

    int *a = &num;
    int *b = &number;

    printf("Original address of num: %u \n", a);
    printf("Original address of number: %u \n", b);
    printf("Subtracting 1 from address of num: %u \n \n", --a);

    if(a == b) // Comparison of two pointer variables
    {
        printf("They are same !");
    }

    else
    {
        printf("They are not same !");
    }

    return 0;
}