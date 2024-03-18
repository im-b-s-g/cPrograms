#include <stdio.h>
#define MAX 100
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

void print(int matrix[MAX][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < 25; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < cols; j++)
        {
            printf(YELLOW "%d " RESET, matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int rows1, cols1, rows2, cols2;

    printf(GREEN "Enter number of Rows in matrix 1: \n" RESET);
    scanf("%d", &rows1);
    printf(GREEN "Enter number of Columns in matrix 1: \n" RESET);
    scanf("%d", &cols1);

    printf(GREEN "Enter number of Rows in matrix 2: \n" RESET);
    scanf("%d", &rows2);
    printf(GREEN "Enter number of Columns in matrix 2: \n" RESET);
    scanf("%d", &cols2);

    printf(MAGENTA "---------------------------------------------------------------\n" RESET);
    printf(YELLOW "\t\t\tEnter the Matrix values.\n" RESET);
    printf(MAGENTA "---------------------------------------------------------------\n\n" RESET);

    int matrix1[MAX][MAX], matrix2[MAX][MAX];

    printf(BLUE "Enter elements for matrix 1:\n" RESET);
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf(BLUE "Enter Element matrix1[%d][%d]: " RESET, i, j);
            scanf("%d", &matrix1[i][j]);
        }
        printf("\n");
    }

    printf(BLUE "Enter elements for matrix 2:\n" RESET);
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf(BLUE "Enter Element matrix2[%d][%d]: " RESET, i, j);
            scanf("%d", &matrix2[i][j]);
        }
        printf("\n");
    }

    printf(MAGENTA "---------------------------------------------------------------\n" RESET);
    printf(YELLOW "\t\t\tMatrix 1:\n" RESET);
    printf(MAGENTA "---------------------------------------------------------------\n\n" RESET);
    print(matrix1, rows1, cols1);

    printf(MAGENTA "---------------------------------------------------------------\n" RESET);
    printf(YELLOW "\t\t\tMatrix 2:\n" RESET);
    printf(MAGENTA "---------------------------------------------------------------\n\n" RESET);
    print(matrix2, rows2, cols2);
    printf("\n\n");
    printf(CYAN "Performing XOR on matrix 1 and Matrix 2. Calculating Resultant Matrix.........\n" RESET);

    printf(MAGENTA "---------------------------------------------------------------\n" RESET);
    printf(YELLOW "\t\t Resultant Matrix \n" RESET);
    printf(MAGENTA "---------------------------------------------------------------\n\n" RESET);

    int resultant[MAX][MAX];

    int row = 0, col = 0;

    (rows1 < rows2) ? (row = rows1) : (row = rows2);
    (cols1 < cols2) ? (col = cols1) : (col = cols2);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            resultant[i][j] = matrix1[i][j] ^ matrix2[i][j];
        }
    }

    print(resultant, row, col);

    return 0;
}
