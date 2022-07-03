# include <stdio.h>

int main(){

    int length, breadth;
    printf("Enter the Value of Length: ");
    scanf("%d", &length);  

    printf("Enter the Value of Breadth: ");
    scanf("%d", &breadth);

    int area = length*breadth;

    printf("\nThe area of the rectangle is %d",area);

    return 0;

}       