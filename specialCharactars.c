#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

void countSpecialCharacters(const char *str, int *count)
{
    *count = 0;
    while (*str)
    {
        if (!isalnum(*str) && !isspace(*str))
        {
            (*count)++;
        }
        str++;
    }
}

int main()
{
    char str[MAX];
    int specialCharCount;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    countSpecialCharacters(str, &specialCharCount);

    printf("The count of special characters is: %d\n", specialCharCount);

    return 0;
}
