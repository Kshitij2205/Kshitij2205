// Write a structure capable of storing data.
// Write a function to compare those data.

#include <stdio.h>
#include <string.h>

struct data
{
    int num;
    char name[10];

} d1, d2;

void show(struct data d1, struct data d2)
{
    printf("%d %d\n", d1.num, d2.num);
    printf("%s %s\n", d1.name, d2.name);
}

int main()
{
    d1.num = 10;
    strcpy(d1.name, "Kshitij");

    d2.num = 20;
    strcpy(d2.name, "urmom");

    show(d1, d2);

    return 0;
}