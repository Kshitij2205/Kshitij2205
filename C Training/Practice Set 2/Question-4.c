# include <stdio.h>

int main(){

//  Step by step evaluation of 3 * x / y - z + k
//  where x = 2, y = 3, z = 3, k = 1.

//  Points to remember:

// - Compiles left to right
// - Pick Top priority operators first

//  3 * x / y - z + k
//  6 / y - z + k
//  2 - z + k
//  -1 + k
//  0

// Program to clear :V

int x = 2, y = 3, z = 3, k = 1;
int result = 3 * x / y - z + k;

printf("The Result is %d", result);

    return 0;

}