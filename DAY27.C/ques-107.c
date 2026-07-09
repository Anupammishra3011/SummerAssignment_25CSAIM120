#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary, hra, da, grossSalary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i;

    do
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary Details\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basicSalary);

                // Calculate HRA and DA
                emp[n].hra = emp[n].basicSalary * 0.20;   // 20% HRA
                emp[n].da = emp[n].basicSalary * 0.10;    // 10% DA

                // Calculate Gross Salary
                emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

                printf("Salary Record Added Successfully!\n");
                n++;
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo salary records found!\n");
                }
                else
                {
                    printf("\n========== Salary Details ==========\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee ID   : %d", emp[i].id);
                        printf("\nEmployee Name : %s", emp[i].name);
                        printf("\nBasic Salary  : %.2f", emp[i].basicSalary);
                        printf("\nHRA (20%%)     : %.2f", emp[i].hra);
                        printf("\nDA (10%%)      : %.2f", emp[i].da);
                        printf("\nGross Salary  : %.2f", emp[i].grossSalary);
                        printf("\n-------------------------------------\n");
                    }
                }
                break;

            case 3:
                printf("\nExiting Salary Management System...\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}