#include <stdio.h>
#include <string.h>
#define MAX 100

int pallindromeOrNot(char *s)
{
    int size = strlen(s);
    int i = 0;

    while (i < size - 1)
    {
        if (s[i] != s[size - 1])
            return 0;

        i++, size--;
    }
    return 1;
}

int main()
{
    char s[MAX];

    printf("Enter a String.\n");
    scanf(" %[^\n]", s);

    if (pallindromeOrNot(s))
        printf("String is pallindrome.\n");
    else
        printf("String is not pallindrome.\n");

    return 0;
}