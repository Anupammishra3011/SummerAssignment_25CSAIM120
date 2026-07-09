#include <stdio.h>

struct Item
{
    int itemId;
    char itemName[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n = 0, choice, i, searchId, found;

    do
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Item ID: ");
                scanf("%d", &item[n].itemId);

                printf("Enter Item Name: ");
                scanf(" %[^\n]", item[n].itemName);

                printf("Enter Quantity: ");
                scanf("%d", &item[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &item[n].price);

                n++;
                printf("Item Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo items available!\n");
                }
                else
                {
                    printf("\n========== Inventory ==========\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nItem ID   : %d\n", item[i].itemId);
                        printf("Item Name : %s\n", item[i].itemName);
                        printf("Quantity  : %d\n", item[i].quantity);
                        printf("Price     : %.2f\n", item[i].price);
                        printf("-------------------------------\n");
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("\nNo items available!\n");
                }
                else
                {
                    printf("Enter Item ID to Search: ");
                    scanf("%d", &searchId);

                    found = 0;

                    for(i = 0; i < n; i++)
                    {
                        if(item[i].itemId == searchId)
                        {
                            printf("\nItem Found!\n");
                            printf("Item ID   : %d\n", item[i].itemId);
                            printf("Item Name : %s\n", item[i].itemName);
                            printf("Quantity  : %d\n", item[i].quantity);
                            printf("Price     : %.2f\n", item[i].price);
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Item not found!\n");
                    }
                }
                break;

            case 4:
                printf("\nExiting Inventory Management System...\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}