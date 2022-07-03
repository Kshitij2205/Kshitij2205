# include <stdio.h>

float mean();

int main()
{
    printf("The average of the three numbers is %f", mean());

    return 0;
}

float mean(int a, int b, int c)
{
    printf(" Enter The First Number: ");
    scanf("%d", &a);

    printf(" Enter The Second Number: ");
    scanf("%d", &b);

    printf(" Enter The Third Number: ");
    scanf("%d", &c);

    int total = a + b + c;
    float d = (float)total / 3;

    return d;
}

