#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    struct Book book[100];
    int n = 0, choice, i, searchId, found;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &book[n].bookId);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", book[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", book[n].author);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo books available!\n");
                }
                else
                {
                    printf("\n========== Book List ==========\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook ID : %d\n", book[i].bookId);
                        printf("Title   : %s\n", book[i].title);
                        printf("Author  : %s\n", book[i].author);
                        printf("-------------------------------\n");
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("\nNo books available!\n");
                }
                else
                {
                    printf("Enter Book ID to Search: ");
                    scanf("%d", &searchId);

                    found = 0;

                    for(i = 0; i < n; i++)
                    {
                        if(book[i].bookId == searchId)
                        {
                            printf("\nBook Found!\n");
                            printf("Book ID : %d\n", book[i].bookId);
                            printf("Title   : %s\n", book[i].title);
                            printf("Author  : %s\n", book[i].author);
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Book not found!\n");
                    }
                }
                break;

            case 4:
                printf("\nExiting Library Management System...\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}