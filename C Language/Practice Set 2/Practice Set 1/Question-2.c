# include <stdio.h>

int main(){

    float pi = 3.14;
    float height, radius;
    
    printf("\nEnter the value of radius: ");
    scanf("%f", &radius);

    float area_of_circle = pi*radius*radius;
    
    printf("\nThe area of the circle is %f",area_of_circle);

    printf("\nEnter the value of height: ");
    scanf("%f", &height);

    float area_of_cylinder = pi*radius*radius*height;

    printf("\nThe area of the cylinder is %f",area_of_cylinder);

    return 0;

}