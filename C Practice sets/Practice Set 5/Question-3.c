// Write a function to calculate force of attraction of a body of mass m exerted by earth.
// (g = 9.8 m/s)

float attract(float mass)
{
    float g, ans;

    g = 9.8;
    ans = mass * g;

    return ans;

}

#include <stdio.h>

int main()
{
    float mass;

    printf("Enter the mass of the body: ");
    scanf("%f", &mass);

    printf("The force of attraction on a body of mass m is %.3f.\n", attract(mass));

    return 0;
}