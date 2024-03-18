#include <stdio.h>
#include <windows.h>

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
        for (int j = 0; j < cols; j++)
        {
            printf(YELLOW "%d " RESET, matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows = 0, cols = 0;
    int matrix[MAX][MAX] = {0};
    printf("\n\n");
    printf(GREEN "Enter a number of Rows.\n" RESET);
    scanf("%d", &rows);
    printf(GREEN "Enter a number of Columns.\n" RESET);
    scanf("%d", &cols);
    printf("\n");

    printf(MAGENTA "---------------------------------------------------------------\n" RESET);
    printf(YELLOW "\t\t\tEnter the Martix values.\n" RESET);
    printf(MAGENTA "---------------------------------------------------------------\n\n" RESET);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(BLUE "Enter Element matrix[%d][%d]: " RESET, i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    print(matrix, rows, cols);

    printf(CYAN "validating the Matrix......\n" RESET);

    printf("\n");
    int flag = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i && j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag)
    {
        printf(RED "Matrix is Not an Upper triangular Matrix.\n\n" RESET);
    }
    else
    {
        printf(GREEN "Matrix is an Upper triangular Matrix.\n\n" RESET);
    }

    return 0;
}