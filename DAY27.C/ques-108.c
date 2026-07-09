#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main()
{
    struct Student s;
    int i;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);

    s.total = 0;

    printf("\nEnter Marks of 5 Subjects:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    // Grade Calculation
    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 75)
        s.grade = 'B';
    else if(s.percentage >= 60)
        s.grade = 'C';
    else if(s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Student Name: %s\n", s.name);

    printf("\nMarks:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d : %d\n", i + 1, s.marks[i]);
    }

    printf("-------------------------------\n");
    printf("Total      : %d\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);
    printf("Grade      : %c\n", s.grade);

    if(s.grade == 'F')
        printf("Result     : Fail\n");
    else
        printf("Result     : Pass\n");

    return 0;
}