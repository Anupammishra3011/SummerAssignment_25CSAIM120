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
    int n = 0, choice, i, searchId, found;

    do
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);

                printf("Enter Employee Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo employee records found!\n");
                }
                else
                {
                    printf("\nEmployee Records:\n");
                    printf("--------------------------------------\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("ID     : %d\n", emp[i].id);
                        printf("Name   : %s\n", emp[i].name);
                        printf("Salary : %.2f\n", emp[i].salary);
                        printf("--------------------------------------\n");
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("\nNo employee records available!\n");
                }
                else
                {
                    printf("Enter Employee ID to search: ");
                    scanf("%d", &searchId);

                    found = 0;

                    for(i = 0; i < n; i++)
                    {
                        if(emp[i].id == searchId)
                        {
                            printf("\nEmployee Found!\n");
                            printf("ID     : %d\n", emp[i].id);
                            printf("Name   : %s\n", emp[i].name);
                            printf("Salary : %.2f\n", emp[i].salary);
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Employee not found!\n");
                    }
                }
                break;

            case 4:
                printf("\nExiting Employee Management System...\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}