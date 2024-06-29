#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "ThreeParas.txt"

// Function to count vowels and consonants in the file content
void countVowelsAndConsonants(const char *text, int *vowelCount, int *consonantCount)
{
    *vowelCount = 0;
    *consonantCount = 0;
    char ch;
    while ((ch = *text++) != '\0')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                (*vowelCount)++;
            }
            else
            {
                (*consonantCount)++;
            }
        }
    }
}

int main()
{
    FILE *file;
    char buffer[256];
    int vowelCount, consonantCount;

    // Opening the file for writing
    file = fopen(FILENAME, "w");
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Writing three paragraphs to the file
    printf("Enter three paragraphs of text:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Paragraph %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        fputs(buffer, file);
        fputc('\n', file); // Ensure each paragraph is on a new line
    }
    fclose(file);

    // Opening the file for reading
    file = fopen(FILENAME, "r");
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Displaying the content of the file
    printf("\nContent of the file:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    rewind(file); // Rewind the file pointer to the beginning

    // Reading file content to count vowels and consonants
    int index = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        buffer[index++] = ch;
    }
    buffer[index] = '\0'; // Null-terminate the string

    // Count vowels and consonants
    countVowelsAndConsonants(buffer, &vowelCount, &consonantCount);

    // Display the counts
    printf("\nNumber of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);

    fclose(file);
    return 0;
}
