#include <stdio.h>

int findLength(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int subStrEnd(char *s1, char *s2)
{
    int size = findLength(s1);
    int size2 = findLength(s2);

    int start = size - size2;
    int i = 0;

    while (start < size && i < size2)
    {
        if (s1[start] != s2[i])
            return 0;

        i++, start++;
    }
    return 1;
}

int main()
{
    char s1[100], s2[100];
    printf("Enter main String.\n");
    scanf(" %[^\n]", &s1);
    fflush(stdin);
    printf("Enter subtring.\n");
    scanf(" %[^\n]", &s2);

    int size = findLength(s1);
    int size2 = findLength(s2);

    if (size < size2)
    {
        printf("Invalid Input.\n ");
        return 0;
    }

    subStrEnd(s1, s2) ? printf("True: 1") : printf("False: 0");
    return 0;
}