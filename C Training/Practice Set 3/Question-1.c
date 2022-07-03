# include <stdio.h>

int main(){

    //  What will be the output of this program 

    //  int a = 10;
    //  if (a = 11)
    //      printf("I am 11");
    //  else
    //      printf("I am not 11");

    //  The output of this program will be
    //  I am 11

    //  This is because in if function, a = 11 and '=' is an assignment operator
    // (Remember this ?!!?) '=' is used for assignment but
    // '==' is used for equality check

    // Evrey non-zero number is considered as true in C language
    // You gotta put a == 11 is then it will check / compare both the values 

    int a = 10;
    if (a = 11)
    {
        printf("I am 11");
    }

    else
    {
        printf("I am not 11");
    }
    return 0;

}