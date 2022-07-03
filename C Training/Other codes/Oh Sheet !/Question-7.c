# include <stdio.h>

// A library charges fine for books returned late. Following are the fines:

// first five days 40 paisa per day,
// six to ten days 65 paisa per day,
// above 10 days 80 paisa per day.

// Program to calculate the fine assuming that a book is returned N days later.

int main()
{
    int n; // assuming 'n' as number of days.
    float fine;

    if(n >= 1 && n <= 5)
    {
        fine = n * 40;
        printf("You total fine is %d", fine);
    }
    else if(n >= 6 && n <= 10)
    {
        fine = n * 65;
        printf("You total fine is %d", fine);
    }
    else if(n > 10)
    {
        fine = n * 80;
        printf("You total fine is %d", fine);
    }    
    return 0;
}