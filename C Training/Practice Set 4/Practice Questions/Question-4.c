# include <stdio.h>

int main()
{

    //  What can be done using one type of loop
    //  Can also be done with other two types
    //  Of loops... True or False ?

    //  Ans - True

    int num = 0;

    while(num < 5)
    {
        printf("%d  ", num); num++;
    }

    int bruh = 0;

    printf("\n");

    do
    {
        printf("%d  ", bruh); bruh++;
    } 
    while (bruh < 5); 

    printf("\n");

    for(int e = 0; e < 5; e++)
    {
        printf("%d  ", e);
    }
    

    return 0;

}