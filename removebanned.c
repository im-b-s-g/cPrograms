#include <stdio.h>
#include <string.h>

int findLength(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char s1[100][20];
    char inputString[100];
    char *banned[] = {"a", "an", "the", "A", "An", "The"};

    printf("Enter a string.\n");
    scanf(" %[^\n]", &inputString);

    int size = findLength(inputString);
    int i = 0, k = 0, j = 0, wCount = 0;
    char ch[20];

    while (i < size)
    {
        if (inputString[i] == ' ' || i == size - 1)
        {
            s1[k][j] = '\0';
            j = 0, i += 1, k += 1, wCount += 1;
        }
        else
        {
            s1[k][j] = inputString[i];
            j += 1, i += 1;
        }
    }

    for (i = 0; i < wCount; i++)
    {
        int flag = 0;
        for (int j = 0; j < 6; j++)
        {
            if (!strcmp(s1[i], banned[j]))
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%s ", s1[i]);
    }
    printf(".");
    return 0;
}