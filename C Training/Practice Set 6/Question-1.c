# include <stdio.h>

int main()
{
    int address_1 = 10;
    int *ptr = &address_1;
    
    printf("The address of variable address_1 is %u \n", &address_1);
    printf("The value of the variable address_1 is %u", *ptr);

    return 0;
}