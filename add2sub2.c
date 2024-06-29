#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void modify(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] += 1;
        }
        if (arr[i] > 0)
        {
            arr[i] -= 2;
        }
    }
}

int main()
{
    int size = 0;

    printf("Enter the number of elements in the array.\n");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    modify(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}