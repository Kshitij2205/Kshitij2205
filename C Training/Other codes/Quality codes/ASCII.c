# include <stdio.h>

// Here is a program to find the ASCII value of any character :V
// I'm sure you won't read this long wall of text though...

// ASCII - American Standard Code for Information Interchange
// It is a character encoding scheme used for electronics communication. 
// Each character or a special character is represented by some ASCII code, 
// and each ascii code occupies 7 bits in memory.

// In C programming language -
// A character variable does not contain a character value itself 
// rather the ascii value of the character variable. 
// The ascii value represents the character variable in numbers,
// and each character variable is assigned with some number range from 0 to 127.

// The ASCII value of lowercase alphabets are from 97 to 122.
// And, the ASCII value of uppercase alphabets are from 65 to 90.
// That is, alphabet a is stored as 97 and alphabet z is stored as 122.
// Similarly, alphabet A is stored as 65 and alphabet Z is stored as 90.

// In short :V

// A - Z = 65 - 90 (A = 65 and Z = 90)
// a - z = 97 - 122 (a = 97 and z = 122)

// If you want to print the ASCII value of a character,
// Simply, put %d instead of %c in the printf command.

int main() 
{
    char alphabets;

    printf("Enter the character: ");
    scanf("%c", &alphabets);

    printf("The ASCII value of %c is %d.", alphabets, alphabets); 
    // Note that I put %d in the last to get the value of the character.
    

    return 0;
}