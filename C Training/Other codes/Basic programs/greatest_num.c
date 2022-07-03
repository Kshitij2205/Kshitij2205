# include <stdio.h>

int main()
{
    int a, b, c;

        printf("Enter The first number: ");
        scanf("%d", &a);

        printf("Enter The second number: ");
        scanf("%d", &b);
    
        printf("Enter The third number: ");
        scanf("%d", &c);

        if(a > b && a > c)
            printf("a is the greatest among all the 3 numbers. \n");

        else if(b > a && b > c)
            printf("b is the greatest among all the 3 numbers. \n");

        else if(c > a && c > b)
            printf("c is the greatest among all the 3 numbers. \n");

        else if(a == b || a == c || b == c)
            printf("Clever boi !");
    return 0;
}