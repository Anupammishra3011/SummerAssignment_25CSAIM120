#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student records
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student records
    printf("\n===== Student Records =====\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");

    for (i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f\n",
               s[i].rollNo,
               s[i].name,
               s[i].marks);
    }

    return 0;
}