#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guessed_number;
    int total_guesses = 0;

    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 and 100

    printf("You have to guess the number between 1 and 100... \n");

    while(guessed_number != number)
{
        printf("\n Enter you guessed number: ");
        scanf("%d", &guessed_number);

        if (guessed_number < number)
    {
        printf("Higher Number Please ! \n");
        total_guesses++;
        continue;
    }

    else if(guessed_number > number)
    {
        printf("Lower Number Please ! \n");
        total_guesses++;
        continue;
    }
}
    total_guesses++;
    printf("You guessed the number in %d times", total_guesses);

    return 0;
}