#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 10

void print(int arr[SIZE][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int *subtract(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int rows, int cols)
{

    int(*result)[SIZE] = malloc(rows * sizeof(*result));
    if (result == NULL)
    {
        exit(0);
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    return result;
}

// Q1. Transpose
//  int main()
//  {
//      int arr[3][3] = {
//          {1, 2, 11},
//          {4, 3, 10},
//          {5, 9, 15}};

//     cols = sizeof(arr[0]) / sizeof(int);
//     rows = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     print(arr, size);
// }

int main()
{

    int arr[SIZE][SIZE] = {
        {1, 2, 11},
        {4, 3, 10},
        {5, 9, 15}};

    int cols = 3;
    int rows = 3;

    int arr1[SIZE][SIZE] = {
        {1, 2, 14, 12},
        {5, 14, 11, 13},
        {5, 10, 16, 18}};

    int cols2 = 4;
    int rows2 = 3;

    print(arr, rows, cols);
    printf("\n");
    print(arr1, rows2, cols2);
    printf("\n");
    int(*result)[SIZE] = subtract(arr1, arr, rows, cols);
    print(result, cols, rows);
}