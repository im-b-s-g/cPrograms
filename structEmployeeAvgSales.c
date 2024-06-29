#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Employee
{
    int empCode;
    char name[50];
    float sales;
};

int readEmployeeDetails(struct Employee employees[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Code: ");
        scanf("%d", &employees[i].empCode);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Sales: ");
        scanf("%f", &employees[i].sales);
    }
    return i;
}

void calculateTotalAndAverage(struct Employee employees[], int n, float *totalSales, float *averageSales)
{
    *totalSales = 0;
    for (int i = 0; i < n; i++)
    {
        *totalSales += employees[i].sales;
    }
    *averageSales = *totalSales / n;
}

void displayEmployeeDetails(struct Employee employees[], int n, float totalSales, float averageSales)
{
    printf("\nEmployee Details\n");
    printf("%-10s %-20s %-10s\n", "Emp Code", "Name", "Sales");
    for (int i = 0; i < n; i++)
    {
        printf("%-10d %-20s %-10.2f\n", employees[i].empCode, employees[i].name, employees[i].sales);
    }
    printf("\nTotal Sales: %.2f\n", totalSales);
    printf("Average Sales: %.2f\n", averageSales);
}

int main()
{
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_EMPLOYEES)
    {
        printf("Invalid number of employees. Please enter a number between 1 and %d.\n", MAX_EMPLOYEES);
        return 1;
    }

    readEmployeeDetails(employees, n);

    float totalSales, averageSales;
    calculateTotalAndAverage(employees, n, &totalSales, &averageSales);

    displayEmployeeDetails(employees, n, totalSales, averageSales);

    return 0;
}
