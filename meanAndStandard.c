#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 100

int main()
{
    int n = 0;
    printf("Enter the number of elements.\n");
    scanf("%d", &n);
    float sum = 0;

    float *arr = (float *)malloc(n * sizeof(float));

    if (arr == NULL)
    {
        printf("Memory not allocated!\n");
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
        printf("\n");
    }

    float mean = (float)sum / n;
    float X = 0;
    for (int i = 0; i < n; i++)
    {
        X += (mean - arr[i]) * (mean - arr[i]);
    }

    float standardDeviation = sqrt((float)X / n);

    printf("sum is: %f\n", sum);
    printf("Mean is: %f\n", mean);
    printf("standard Deviation is: %f\n", standardDeviation);

    free(arr);
    return 0;
}