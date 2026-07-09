#include <stdio.h>

struct BankAccount
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct BankAccount acc;
    int choice;
    float amount;

    printf("===== Bank Account System =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);

                acc.balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter Withdrawal Amount: ");
                scanf("%f", &amount);

                if(amount <= acc.balance)
                {
                    acc.balance -= amount;
                    printf("Withdrawal Successful!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("\n===== Account Details =====\n");
                printf("Account Number : %d\n", acc.accountNo);
                printf("Account Holder : %s\n", acc.name);
                printf("Current Balance: %.2f\n", acc.balance);
                break;

            case 4:
                printf("Thank You for Using Bank Account System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}