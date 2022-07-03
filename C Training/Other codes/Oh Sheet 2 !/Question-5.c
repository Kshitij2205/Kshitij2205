# include <stdio.h>

// Program to display the cube of the number upto given an integer. 

int main()
{
    int num, cube;

    printf("Enter the number: ");
    scanf("%d", &num);

    cube = num * num * num;

    printf("The cube of %d is %d.", num, cube);

    return 0;
}