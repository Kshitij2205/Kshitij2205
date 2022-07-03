# include <stdio.h>

int main()
{

    //  A 'do - while' loop is executed:

    //  (i) At least once
    //  (ii) At least twice
    //  (iii) At most once 

    //  Ans - (i) At least once, cuz it first prints then checks the condition.

    int num = 0;

    do
    {
        printf("%d", num);
        num++;
    } 
    while ( num > 1);
     
    return 0;

}