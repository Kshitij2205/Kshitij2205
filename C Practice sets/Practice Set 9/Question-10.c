// Solve previous question for time using typedef keyword.

#include <stdio.h>
#include <string.h>

typedef struct data
{
    int num;
    char name[10];

} hmm;

void show(hmm d1, hmm d2)
{
    printf("%d %d\n", d1.num, d2.num);
    printf("%s %s\n", d1.name, d2.name);
}

int main()
{
    hmm d1, d2;

    d1.num = 10;
    strcpy(d1.name, "Kshitij");

    d2.num = 20;
    strcpy(d2.name, "urmom");

    show(d1, d2);

    return 0;
}