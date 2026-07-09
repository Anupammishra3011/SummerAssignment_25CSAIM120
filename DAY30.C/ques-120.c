#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int count = 0;

void addStudent()
{
    printf("Roll: ");
    scanf("%d", &s[count].roll);

    printf("Name: ");
    scanf("%s", s[count].name);

    printf("Marks: ");
    scanf("%f", &s[count].marks);

    count++;
}

void displayStudents()
{
    int i;

    printf("\nStudent Records\n");

    for (i = 0; i < count; i++)
    {
        printf("\nRoll : %d", s[i].roll);
        printf("\nName : %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }
}

void searchStudent()
{
    int roll, i;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++)
    {
        if (s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Name : %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            return;
        }
    }

    printf("Student Not Found\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n====== Student Management ======\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice");
        }
    }
}