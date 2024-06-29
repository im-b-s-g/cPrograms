#include <stdio.h>
#include <stdlib.h>

#define NUM_COUNT 20

void writeNumbersToFile(int *numbers, int count, const char *filename)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error opening file %s for writing!\n", filename);
        exit(1);
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%d\n", numbers[i]);
    }

    fclose(file);
}

void separateNumbers(const char *inputFile, const char *oddFile, const char *evenFile)
{
    FILE *file = fopen(inputFile, "r");
    if (file == NULL)
    {
        printf("Error opening file %s for reading!\n", inputFile);
        exit(1);
    }

    FILE *odd = fopen(oddFile, "w");
    if (odd == NULL)
    {
        printf("Error opening file %s for writing!\n", oddFile);
        fclose(file);
        exit(1);
    }

    FILE *even = fopen(evenFile, "w");
    if (even == NULL)
    {
        printf("Error opening file %s for writing!\n", evenFile);
        fclose(file);
        fclose(odd);
        exit(1);
    }

    int num;
    while (fscanf(file, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            fprintf(even, "%d\n", num);
        }
        else
        {
            fprintf(odd, "%d\n", num);
        }
    }

    fclose(file);
    fclose(odd);
    fclose(even);
}

int main(int argc, char *argv[])
{
    if (argc != NUM_COUNT + 1)
    {
        printf("Please provide exactly %d integers as command line arguments.\n", NUM_COUNT);
        return 1;
    }

    int numbers[NUM_COUNT];
    for (int i = 1; i <= NUM_COUNT; i++)
    {
        numbers[i - 1] = atoi(argv[i]);
    }

    const char *numbersFile = "Numbers.txt";
    const char *oddFile = "odd.txt";
    const char *evenFile = "even.txt";

    // Write the numbers to Numbers.txt
    writeNumbersToFile(numbers, NUM_COUNT, numbersFile);

    // Separate the numbers into odd.txt and even.txt
    separateNumbers(numbersFile, oddFile, evenFile);

    printf("Numbers have been written to %s and separated into %s and %s.\n", numbersFile, oddFile, evenFile);

    return 0;
}
