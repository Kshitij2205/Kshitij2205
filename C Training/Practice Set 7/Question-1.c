# include <stdio.h>

int main()
{
    int array[10];

    int *ptr = &array[0];
    ptr = &ptr[2];

    if(ptr == &array[2])
    {
        printf("They are same !");
    }

    else{
        printf("They are not same !");
    }

    return 0;
}