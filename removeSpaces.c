#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

char *removeSpaces(char *inputText)
{
    int size = strlen(inputText);
    char *outputText = (char *)malloc(size * sizeof(char));
    int i = 0, j = 0;

    for (i = 0; i < size; i++)
    {
        if (inputText[i] == ' ')
            continue;

        outputText[j] = inputText[i];
        j++;
    }

    outputText[j] = '\0';

    return outputText;
}

int main()
{
    char inputText[MAX];

    printf("Enter the input string.\n");
    scanf(" %[^\n]", &inputText);

    char *outputText = removeSpaces(inputText);

    printf("inputText: %s\n", inputText);
    printf("OutputText: %s\n", outputText);
}