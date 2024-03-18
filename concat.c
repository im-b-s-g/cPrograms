// Q2. input and get length of words

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 100

int findLength(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

char *concat(char *s1, char *s2)
{
    int size1 = findLength(s1);
    int size2 = findLength(s2);

    char *s3 = (char *)malloc((size1 + size2 + 2) * sizeof(char));
    int i = 0, j = 0;

    while (size1 != 0)
    {
        s3[i] = s1[i];
        i++;
        size1--;
    }
    s3[i] = ' ';
    i++;
    while (size2 != 0)
    {
        s3[i] = s2[j];
        i++, j++;
        size2--;
    }
    s3[i] = '\0';

    return s3;
}

int main()
{
    int num = 0;
    char s[max][max];
    int len[max] = {0};

    printf("Enter the number of words You wish to enter: \n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter word %d: ", i + 1);
        scanf(" %[^\n]", &s[i]);
        len[i] = findLength(s[i]);
    }
    printf("--------------------------\n");
    printf("Word\t\tLength\n");
    printf("--------------------------\n");
    for (int i = 0; i < num; i++)
    {
        printf("%s\t|\t%d\n", s[i], len[i]);
    }

    char ch;
    fflush(stdin);
    printf("press 1 to concatenate word1 and word2.\n");
    scanf("%c", &ch);

    if (ch == '1')
    {
        char *s1 = concat(s[0], s[1]);
        printf("Concatenated String:  %s", s1);
    }
    else
        printf("Std::Concat() Access denied. Exiting Program Now.\n");

    return 0;
}