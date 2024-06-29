#include <stdio.h>
#include <stdlib.h>

#define SOURCE_FILENAME "source.txt"
#define DEST_FILENAME "destination.txt"

int main()
{
    FILE *sourceFile, *destFile;
    char ch;

    // Open the source file for writing
    sourceFile = fopen(SOURCE_FILENAME, "w");
    if (sourceFile == NULL)
    {
        printf("Error opening source file for writing!\n");
        return 1;
    }

    // Write content to the source file
    printf("Enter text to write to the source file (end with a newline):\n");
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, sourceFile);
    }
    fclose(sourceFile);

    // Open the source file for reading
    sourceFile = fopen(SOURCE_FILENAME, "r");
    if (sourceFile == NULL)
    {
        printf("Error opening source file for reading!\n");
        return 1;
    }

    // Open the destination file for writing
    destFile = fopen(DEST_FILENAME, "w");
    if (destFile == NULL)
    {
        printf("Error opening destination file for writing!\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source file to destination file without spaces
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        if (ch != ' ')
        {
            fputc(ch, destFile);
        }
    }

    fclose(sourceFile);
    fclose(destFile);

    // Open the destination file for reading
    destFile = fopen(DEST_FILENAME, "r");
    if (destFile == NULL)
    {
        printf("Error opening destination file for reading!\n");
        return 1;
    }

    // Display the content of the destination file
    printf("\nContent of the destination file without spaces:\n");
    while ((ch = fgetc(destFile)) != EOF)
    {
        putchar(ch);
    }

    fclose(destFile);

    return 0;
}
