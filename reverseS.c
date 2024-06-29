#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char s[MAX];

    printf("Enter a String.\n");
    scanf(" %[^\n]", &s);

    printf("string before reverse: %s\n", s);
    int size = strlen(s);

    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++, j--;
    }

    printf("reversed string is: %s\n", s);
}