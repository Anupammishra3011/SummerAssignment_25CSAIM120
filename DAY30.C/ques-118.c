#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int count = 0, choice, i;

    while (1)
    {
        printf("\n===== Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Book ID: ");
            scanf("%d", &b[count].id);

            printf("Book Title: ");
            scanf("%s", b[count].title);

            printf("Author: ");
            scanf("%s", b[count].author);

            count++;
            break;

        case 2:
            printf("\nLibrary Books\n");

            for (i = 0; i < count; i++)
            {
                printf("\nID: %d", b[i].id);
                printf("\nTitle: %s", b[i].title);
                printf("\nAuthor: %s\n", b[i].author);
            }
            break;

        case 3:
        {
            int id;
            printf("Enter Book ID: ");
            scanf("%d", &id);

            for (i = 0; i < count; i++)
            {
                if (b[i].id == id)
                {
                    printf("\nBook Found\n");
                    printf("Title : %s\n", b[i].title);
                    printf("Author: %s\n", b[i].author);
                    break;
                }
            }

            if (i == count)
                printf("Book Not Found\n");

            break;
        }

        case 4:
            return 0;

        default:
            printf("Invalid Choice");
        }
    }
}