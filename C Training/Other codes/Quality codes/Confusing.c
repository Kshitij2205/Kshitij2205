# include <stdio.h>
# include <string.h>
# include <windows.h>

int main()
{
    float a = 0.1;
    float b = 0.2;
    float c = a + b;

    printf("The sum of a and b is %0.9f.", c);

    return 0;
}