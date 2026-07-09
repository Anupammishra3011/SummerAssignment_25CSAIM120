#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int count = 0, choice, i;

    while (1)
    {
        printf("\n===== Employee Management =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Employee ID: ");
            scanf("%d", &emp[count].id);

            printf("Employee Name: ");
            scanf("%s", emp[count].name);

            printf("Salary: ");
            scanf("%f", &emp[count].salary);

            count++;
            break;

        case 2:
            for (i = 0; i < count; i++)
            {
                printf("\nID     : %d", emp[i].id);
                printf("\nName   : %s", emp[i].name);
                printf("\nSalary : %.2f\n", emp[i].salary);
            }
            break;

        case 3:
        {
            int id;

            printf("Enter Employee ID: ");
            scanf("%d", &id);

            for (i = 0; i < count; i++)
            {
                if (emp[i].id == id)
                {
                    printf("\nEmployee Found\n");
                    printf("Name: %s\n", emp[i].name);
                    printf("Salary: %.2f\n", emp[i].salary);
                    break;
                }
            }

            if (i == count)
                printf("Employee Not Found\n");

            break;
        }

        case 4:
            return 0;

        default:
            printf("Invalid Choice");
        }
    }
}