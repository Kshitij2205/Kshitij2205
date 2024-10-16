// Explain step by step evaluation step evaluation of 3 * x / y - z + k
// Where x = 2, y = 3, z = 3,  k = 1

// Answer:

// ((3 * 2) / (3 - 3)) + 1
// (6 / (3 - 3)) + 1
// (2 - 3) + 1
// -1 + 1
// 0

#include <stdio.h>

int main()
{
    int x, y, z, k;

    x = 2;
    y = z = 3;
    k = 1;

    printf("%d\n", 3 * x / y - z + k);

    return 0;
}