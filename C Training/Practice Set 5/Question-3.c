# include <stdio.h>

    float force(float mass);

int main()
{   
    int m;

    printf("Enter the mass of the object: ");
    scanf("%d", &m);

    printf("The force of attraction is %0.3f", force(m));

    return 0;
}

float force(float mass)
{
    float attraction = mass * 9.8;
    return attraction;
}