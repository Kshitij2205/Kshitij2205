#include <stdio.h>

int main()
{

    int maths, science, computers;
    float total_marks;

    printf("Enter You maths marks: ");
    scanf("%d", &maths);

    printf("Enter You science marks: ");
    scanf("%d", &science);

    printf("Enter You computers marks: ");
    scanf("%d", &computers);

    total_marks = (maths + science + computers) / 3;

    if (maths > 100 || science > 100 || computers > 100)
    {
        printf("Invalid Marks !");
    }

    else if (total_marks > 100)
    {
        printf("Invlalid marks !");
    }

    else if (total_marks >= 40 || maths >= 33 || science > 33 || computers >= 33)
    {
        printf("You got %f marks and you are Passed !", total_marks);
    }

    else if ((total_marks < 40) || maths < 33 || science < 33 || computers < 33)
    {
        printf("You got %f marks and you are Failed !", total_marks);
    }

    
    return 0;
}