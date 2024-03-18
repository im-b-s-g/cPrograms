#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int isVowel(int ch)
{
    int c = toupper(ch);

    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main()
{
    char names[MAX][MAX];
    int numberOfNames = 0;

    printf("Enter the number of names to enter.\n");
    scanf("%d", &numberOfNames);

    printf("Enter the Names.\n");

    for (int i = 0; i < numberOfNames; i++)
    {
        fflush(stdin);
        printf("Enter Name %d: ", i + 1);
        scanf(" %[^\n]", &names[i]);
    }

    char ch[MAX];

    printf("Enter the name to search for.\n");
    scanf(" %[^\n]", &ch);

    for (int i = 0; i < numberOfNames; i++)
    {
        if (!stricmp(names[i], ch))
        {
            printf("Name Found at number %d.\n", i + 1);
            return 0;
        }
    }

    for (int i = 0; i < numberOfNames; i++)
    {
        int j = 0;
        while (names[i][j] != '\0')
        {
            if (isVowel(names[i][j]))
            {
                names[i][j] = 'X';
            }
            j++;
        }
    }

    for (int i = 0; i < numberOfNames; i++)
    {
        printf("%s\n", names[i]);
    }

    printf("Name not found.\n");
    return 0;
}