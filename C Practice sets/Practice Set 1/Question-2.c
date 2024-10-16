/* Calculate the area of the circle and modify the same program to 
   calculate the volume of the cylinder given it's radius and height. */

#include <stdio.h>

int main()
{
    float area_circle, volume_cylinder, radius, height;

    radius = 9;
    height = 5;

    area_circle = 3.14 * (radius * radius);
    volume_cylinder = 3.14 * (radius * radius) * height;

    printf("The area of the circle is %0.2f.\n", area_circle);
    printf("The volume of the cylinder given it's radius 9 and height 5 is %0.2f.\n", volume_cylinder);

    return 0;
}