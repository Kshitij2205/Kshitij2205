// Write your own version of strlen function from <string.h>.

int hmm(char *name)
{
    char *letter = name;
    int count = 0;

    while (*letter != '\0')
    {
        count++;
        letter++;
    }

    return count;
}

#include <stdio.h>

int main()
{
    char *name = "Kshitij";
    int count = hmm(name);

    printf("There are %d number of chararcters !", count);

    return 0;
}