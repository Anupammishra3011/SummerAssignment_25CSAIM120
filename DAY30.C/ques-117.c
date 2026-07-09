#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, choice, searchRoll;
    int count = 0;

    while (1)
    {
        printf("\n----- Student Record System -----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("How many students: ");
            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {
                printf("\nRoll: ");
                scanf("%d", &s[count].roll);

                printf("Name: ");
                scanf("%s", s[count].name);

                printf("Marks: ");
                scanf("%f", &s[count].marks);

                count++;
            }
            break;

        case 2:
            printf("\nStudent Records\n");
            for (i = 0; i < count; i++)
            {
                printf("\nRoll : %d", s[i].roll);
                printf("\nName : %s", s[i].name);
                printf("\nMarks: %.2f\n", s[i].marks);
            }
            break;

        case 3:
            printf("Enter Roll Number: ");
            scanf("%d", &searchRoll);

            for (i = 0; i < count; i++)
            {
                if (s[i].roll == searchRoll)
                {
                    printf("\nStudent Found\n");
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    break;
                }
            }

            if (i == count)
                printf("Student Not Found\n");

            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice");
        }
    }
}