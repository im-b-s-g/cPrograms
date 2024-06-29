#include <stdio.h>

void calculateProductAndQuotient(int a, int b, int *product, float *quotient)
{
    *product = a * b;
    if (b != 0)
    {
        *quotient = (float)a / b;
    }
    else
    {
        *quotient = 0;
    }
}

int main()
{
    int num1, num2;
    int product;
    float quotient;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    calculateProductAndQuotient(num1, num2, &product, &quotient);

    printf("Product: %d\n", product);
    if (num2 != 0)
    {
        printf("Quotient: %.2f\n", quotient);
    }
    else
    {
        printf("Quotient: Undefined (division by zero)\n");
    }

    return 0;
}
