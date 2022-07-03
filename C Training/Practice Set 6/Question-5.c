# include <stdio.h>

int main()
{
    int i = 9;
    int *j = &i;
    int **k;
    k = &j; 

    printf("%d \n", **k);

    return 0;
}