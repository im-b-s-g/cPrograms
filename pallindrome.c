// Q. Pallindrome
#include <stdio.h>
#include <stdbool.h>

int findLength(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;

    return i;
}

bool isPallindrome(char *s)
{
    int size = findLength(s);
    int i = 0, j = size - 1;
    while (i < j)
        if (s[i++] != s[j--])
            return false;

    return true;
}
int main()
{

    char s[50];

    printf("Enter A word.\n");
    scanf("%s", &s);

    if (isPallindrome(s))
        printf("The input word is pallindrome.\n");
    else
        printf("The input word is not a pallindrome.\n");

    int length = findLength(s);
    printf("%c ", s[length]);

    return 0;
}