#include <stdio.h>

int main(){

//  Which of the following is invalid in C:
//        
//  (i)     int a; b = a;    
//  (ii)    int v = 3^3;
//  (iii)   char dt = '21 dec 2022';

//  Answer: (i) , (iii)

// (i) is invalid + will throw error as b is not defined.
// int a; int b = a; ( This is valid as b is defined as integer :V)

// (ii) is valid but the result will be wrong.
// This (^) sign is known as bitwise XOR in C Language.
// Function of bitwise XOR:
// takes two boolean operands and returns true if, and only if,
// the operands are different. Conversely, 
// it returns false if the two operands have the same value.

// (iii) is invalid as we can only a store one character.
// char dt = "2"; ( This is valid ) 

    return 0;
}