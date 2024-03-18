#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

char *encrypt(const char *text)
{
    char *encrypt = (char *)malloc((strlen(text) + 1) * sizeof(char));
    if (encrypt == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == 'a')
            encrypt[i] = 'z';
        else if (text[i] == 'A')
            encrypt[i] = 'Z';
        else if ((text[i] >= 'b' && text[i] <= 'z') || (text[i] >= 'B' && text[i] <= 'Z')) //
            encrypt[i] = text[i] - 1;
        else
            encrypt[i] = text[i];
        i++;
    }
    encrypt[i] = '\0';
    return encrypt;
}

char *decrypt(const char *text)
{
    char *decrypt = (char *)malloc((strlen(text) + 1) * sizeof(char));
    if (decrypt == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] == 'z')
            decrypt[i] = 'a';
        else if (text[i] == 'Z')
            decrypt[i] = 'A';
        else if ((text[i] >= 'b' && text[i] <= 'z') || (text[i] >= 'B' && text[i] <= 'Z')) //
            decrypt[i] = text[i] + 1;
        else
            decrypt[i] = text[i];
        i++;
    }
    decrypt[i] = '\0';
    return decrypt;
}

int main()
{
    char inputText[MAX];

    printf("Enter input text.\n");
    scanf(" %[^\n]", &inputText);

    char *cipherText = encrypt(inputText);
    char *decryptText = decrypt(cipherText);

    printf("Input Text: \t %s  \n", inputText);
    printf("Cipher Text: \t %s    \n", cipherText);
    printf("Decrypted Text:  %s \n", decryptText);

    return 0;
}