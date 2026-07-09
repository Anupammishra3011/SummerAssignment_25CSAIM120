#include <stdio.h>

struct Contact
{
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contact[100];
    int n = 0, choice, i, searchId, found;

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Contact ID: ");
                scanf("%d", &contact[n].id);

                printf("Enter Name: ");
                scanf(" %[^\n]", contact[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", contact[n].phone);

                printf("Enter Email: ");
                scanf("%s", contact[n].email);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo contacts available!\n");
                }
                else
                {
                    printf("\n========== Contact List ==========\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nContact ID : %d\n", contact[i].id);
                        printf("Name       : %s\n", contact[i].name);
                        printf("Phone      : %s\n", contact[i].phone);
                        printf("Email      : %s\n", contact[i].email);
                        printf("----------------------------------\n");
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("\nNo contacts available!\n");
                }
                else
                {
                    printf("Enter Contact ID to Search: ");
                    scanf("%d", &searchId);

                    found = 0;

                    for(i = 0; i < n; i++)
                    {
                        if(contact[i].id == searchId)
                        {
                            printf("\nContact Found!\n");
                            printf("Contact ID : %d\n", contact[i].id);
                            printf("Name       : %s\n", contact[i].name);
                            printf("Phone      : %s\n", contact[i].phone);
                            printf("Email      : %s\n", contact[i].email);
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Contact not found!\n");
                    }
                }
                break;

            case 4:
                printf("\nExiting Contact Management System...\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}