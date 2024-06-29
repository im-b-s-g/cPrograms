#include <stdio.h>
#define MAX_ITEMS 100

struct Item
{
    int itemCode;
    char itemName[50];
    int quantity;
    float rate;
};

int readItemDetails(struct Item items[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Item %d:\n", i + 1);
        printf("Item Code: ");
        scanf("%d", &items[i].itemCode);
        printf("Item Name: ");
        scanf("%s", items[i].itemName);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("Rate: ");
        scanf("%f", &items[i].rate);
    }
    return i;
}

float calculateTotalCost(struct Item items[], int n)
{
    float totalCost = 0;
    for (int i = 0; i < n; i++)
    {
        totalCost += items[i].quantity * items[i].rate;
    }
    return totalCost;
}

void displayItemDetails(struct Item items[], int n, float totalCost)
{
    printf("\nItem Details\n");
    printf("%-10s %-20s %-10s %-10s\n", "Item Code", "Item Name", "Quantity", "Rate");
    for (int i = 0; i < n; i++)
    {
        printf("%-10d %-20s %-10d %-10.2f\n", items[i].itemCode, items[i].itemName, items[i].quantity, items[i].rate);
    }
    printf("\nTotal Inventory Cost: %.2f\n", totalCost);
}

int main()
{
    struct Item items[MAX_ITEMS];
    int n;

    printf("Enter the number of items in stock: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_ITEMS)
    {
        printf("Invalid number of items. Please enter a number between 1 and %d.\n", MAX_ITEMS);
        return 1;
    }

    readItemDetails(items, n);

    float totalCost = calculateTotalCost(items, n);
    displayItemDetails(items, n, totalCost);

    return 0;
}
