#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char first[MAX], second[MAX];
    int count[26] = {0};

    printf("Enter first word\n");
    scanf(" %[^\n]", &first);

    printf("Enter second word\n");
    scanf(" %[^\n]", &second);

    for (int i = 0; i < strlen(first); i++)
    {
        if (first[i] >= 'a' && first[i] <= 'z')
            count[first[i] - 'a'] += 1;
        else if (first[i] >= 'A' && first[i] <= 'Z')
            count[first[i] - 'A'] += 1;
    }

    for (int i = 0; i < strlen(second); i++)
    {
        if (second[i] >= 'a' && second[i] <= 'z')
            count[second[i] - 'a'] -= 1;
        else if (second[i] >= 'A' && second[i] <= 'Z')
            count[second[i] - 'A'] -= 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("Given word is Not an ANAGRAM.\n");
            return 0;
        }
    }

    printf("Given Word is an ANAGRAM.\n");
    return 0;
}