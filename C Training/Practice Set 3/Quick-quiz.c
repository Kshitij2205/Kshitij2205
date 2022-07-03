#include <stdio.h>

int main()
{

    //  Write a program to find grade of a student
    //  given his marks based on below:

    //  90 - 100 --> A
    //  80 - 90 --> B
    //  70 - 80 --> C
    //  60 - 70 --> D
    //  marks < 70 --> F

    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("\nYou have got A grade !");
    }

    else if (marks >= 80 && marks <= 90)
    {
        printf("\nYou have got B grade !");
    }

    else if (marks >= 70 && marks <= 80)
    {
        printf("\nYou have got C grade !");
    }

    else if (marks >= 60 && marks <= 70)
    {
        printf("You have got D and F grade !");
        printf("\nYou failed the test !");
    }

    else if (marks < 60 && marks >= 0)
    {
        printf("You have got F grade !");
        printf("\nYou failed the test !");
    }

    else
    {
        printf("Invalid marks !!!");
    }
    
    return 0;

}