# include <stdio.h>

// Using if-else statements, write a program in java to
// Calculate the grade as per the given criteria:

//     Marks                Grade

// >= 80 and <= 100         Excellent
// >= 70 and < 80        First Division
// >= 60 and < 70        Second Division
// >= 50 and < 60        Third Division
// Less than 50              Fail

int main()
{
    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if(marks >= 80 && marks <= 100)
        printf("Grade: Excellent");    

    else if(marks >= 70 && marks < 80)
        printf("Grade: First Division");

    else if(marks >= 60 && marks < 70)
        printf("Grade: Second Division");

    else if(marks >= 50 && marks < 60)
        printf("Grade: Third Division");

    else if(marks < 50)
        printf("Grade: Fail");

    

    return 0;
}