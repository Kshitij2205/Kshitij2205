# include <stdio.h>

int address();

int main()
{
    int i = 10;

    printf("Address of i variable in main: %u \n", &i);

    address(i);
    // The address of i in int main() and in function block are different because
    // if ur name is shubham and other's name is shubham then
    // both of ur addresses will not be same :V

    return 0;
}

int address(int a)
{
    printf("Address of i variabl in function: %u \n", &a);
} 