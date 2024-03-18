#include <stdio.h>
#include <ctype.h>

int findLength(char *s1)
{
    int i = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char s1[100];
    char s2[100];

    printf("Enter the input String.\n");
    scanf(" %[^\n]", &s1);

    int size = findLength(s1);

    for (int i = 0; i < size; i++)
    {
        if (!isalpha(s1[i]))
        {
            s2[i] = s1[i];
        }
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s2[i] = s1[i] - 32;
        }
        else if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s2[i] = s1[i] + 32;
        }
    }
    s2[size] = '\0';
    printf("%s", s2);
    return 0;
}