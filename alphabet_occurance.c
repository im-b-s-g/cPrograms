#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    int arr[26] = {0};
    char str[MAX];
    printf("Enter a string.\n");
    scanf(" %[^\n]", &str);

    int size = strlen(str);
    printf("Length of input string is %d\n", size);

    for (int i = 0; i < size; i++)
    {
        arr[str[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            printf("%c = %d\n", (char)('a' + i), arr[i]);
        }
    }
    return 0;
}