#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int findLength(char *string)
{
    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }
    return i;
}

char *conCat(char *first, char *second)
{

    char *concatenated;
    int i = 0, j = 0;

    while (first[i] != '\0')
    {
        concatenated[i] = first[i];
        i++;
    }
    concatenated[i] = ' ';
    i++;
    while (second[j] != '\0')
    {
        concatenated[i] = second[j];
        i++;
        j++;
    }
    concatenated[i] = '\0';
    i++;

    return concatenated;
}
int main()
{
    char first[MAX];
    char second[MAX];

    printf("Enter first string.\n");
    scanf(" %[^\n]", &first);

    printf("Enter Second string.\n");
    scanf(" %[^\n]", &second);

    char *result = conCat(first, second);

    printf("First: %s \n", first);
    printf("Second: %s \n", second);
    printf("Third: %s \n", result);
    return 0;
}