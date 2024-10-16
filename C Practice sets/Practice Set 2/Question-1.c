/* Which of the following is invalid in C?

(i)   int a; b = a;
(ii)  int v = 3 ^ 3;
(iii) char dt = '21 december 2020'; */

/* Answer:

(i)   invalid
(ii)  valid as ^ is used as XOR operator in C.
(iii) invalid */

#include <stdio.h>

int main()
{
    int v = 3 ^ 3;

    printf("%f\n", v);

    return 0;
}