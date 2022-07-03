# include <stdio.h>
# include <string.h>
# include <windows.h>

// Program to count the number of vowels and alphabets in a string.

int main()
{
    int alp = 0;
    int vow = 0;
    int i = 0;
    char str[50];
    int l;

    printf("Enter the string: ");
    gets(str);

    l = strlen(str);

    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vow++;

        i++;
    }

    alp = l - vow;

    printf("Vowel: %d \n", vow);
    printf("Alphabets: %d", alp);

    return 0;
}