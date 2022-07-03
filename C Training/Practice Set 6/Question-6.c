# include <stdio.h>

int tenmultiply();

int main()
{
    int number = 5;
    
    printf("%d", tenmultiply(number));

    return 0;
}

int tenmultiply(int number)
{
    int changed = number * 10;
    return changed;
}