#include <stdio.h>
struct Employee
{
    char name[50];
    int empCode;
    float salary;
};

void readEmployeeDetails(struct Employee *emp)
{
    printf("Enter Name: ");
    scanf("%s", emp->name);
    printf("Enter Employee Code: ");
    scanf("%d", &emp->empCode);
    printf("Enter Salary: ");
    scanf("%f", &emp->salary);
}

void displayEmployeeDetails(const struct Employee *emp)
{
    printf("\nEmployee Details\n");
    printf("Name: %s\n", emp->name);
    printf("Employee Code: %d\n", emp->empCode);
    printf("Salary: %.2f\n", emp->salary);
}

int main()
{
    struct Employee emp;

    readEmployeeDetails(&emp);
    displayEmployeeDetails(&emp);

    return 0;
}
