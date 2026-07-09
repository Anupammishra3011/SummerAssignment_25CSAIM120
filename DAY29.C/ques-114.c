#include <stdio.h>

int main()
{
    int arr[100], n = 0;
    int choice, i, pos, value;

    do
    {
        printf("\n===== Menu-Driven Array Operations =====\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                printf("Array Created Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("Array is empty!\n");
                }
                else
                {
                    printf("Array Elements: ");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if(n == 100)
                {
                    printf("Array is full!\n");
                }
                else
                {
                    printf("Enter position (1 to %d): ", n + 1);
                    scanf("%d", &pos);

                    if(pos < 1 || pos > n + 1)
                    {
                        printf("Invalid Position!\n");
                    }
                    else
                    {
                        printf("Enter element to insert: ");
                        scanf("%d", &value);

                        for(i = n; i >= pos; i--)
                        {
                            arr[i] = arr[i - 1];
                        }

                        arr[pos - 1] = value;
                        n++;

                        printf("Element Inserted Successfully!\n");
                    }
                }
                break;

            case 4:
                if(n == 0)
                {
                    printf("Array is empty!\n");
                }
                else
                {
                    printf("Enter position to delete (1 to %d): ", n);
                    scanf("%d", &pos);

                    if(pos < 1 || pos > n)
                    {
                        printf("Invalid Position!\n");
                    }
                    else
                    {
                        for(i = pos - 1; i < n - 1; i++)
                        {
                            arr[i] = arr[i + 1];
                        }

                        n--;
                        printf("Element Deleted Successfully!\n");
                    }
                }
                break;

            case 5:
            {
                int key, found = 0;

                if(n == 0)
                {
                    printf("Array is empty!\n");
                }
                else
                {
                    printf("Enter element to search: ");
                    scanf("%d", &key);

                    for(i = 0; i < n; i++)
                    {
                        if(arr[i] == key)
                        {
                            printf("Element found at position %d\n", i + 1);
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Element not found!\n");
                    }
                }
                break;
            }

            case 6:
                printf("Exiting Array Operations System...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}