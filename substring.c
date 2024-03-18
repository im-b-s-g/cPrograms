#include <stdio.h>

int findLength(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;

    return i;
}

char *subStr(char *c, int start, int end, int size)
{
    char *ch;
    int j = 0;
    // for (int i = start; i < end - 1; i++)
    // {
    //     ch[j] = c[i];
    //     j++;
    // }

    if (start + end > size)
        printf("Substring ectraction not possible.\n");
    int i = start;
    while (i < start + end)
    {
        ch[j] = c[i];
        i++, j++;
    }
    return ch;
}

int main()
{
    int start, end;
    char inputString[100];

    printf("Enter an input string.\n");
    scanf(" %[^\n]", &inputString);

    int size = findLength(inputString);
    printf("size of %s : %d \n", inputString, size);
    fflush(stdin);
    printf("Enter starting position of substring.\n");
    scanf("%d", &start);

    printf("Enter ending position of substring.\n");
    scanf("%d", &end);

    // if (start > end || start >= size || end >= size || start < 0 || end < 0)
    // {
    //     printf("Invalid substring indices.\n");
    //     return 0;
    // }

    char *s = subStr(inputString, start, end, size);

    printf("%s", s);
}