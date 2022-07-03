# include <stdio.h>
# include <math.h>

int main()
{
    int input;

    printf("Enter The value of side of the square: ");
    scanf("%d", &input);

    printf("The area of the square is %f", pow(input,2));
    
    return 0;

}