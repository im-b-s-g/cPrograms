#include <stdio.h>
#include <string.h>
#define MAX 100

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
    char students[MAX][30];
    int num = 0, found = 0;
    char inputString[MAX], searchString[30];

    printf("Enter the number of Names.\n");
    scanf("%d", &num);

    fflush(stdin);

    printf("Enter the student Names.\n\n");

    for (int i = 0; i < num; i++)
    {
        printf("Student %d: ", i + 1);
        fflush(stdin);
        scanf(" %[^\n]", &students[i]);
    }

    fflush(stdin);

    printf("Enter the string to search for.\n");
    scanf(" %[^\n]", &searchString);

    for (int i = 0; i < num; i++)
    {
        if (!stricmp(students[i], searchString))
            found = i;
    }

    if (found)
        printf("Name Found at %d position.\n", found + 1);
    else
        printf("Name not found.\n");

    return 0;
}