#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[50];
    int rollNumber;
    struct Date dob;
    struct Date doa;
};

void readStudentDetails(struct Student *s)
{
    printf("Enter Name: ");
    scanf("%s", s->name);
    printf("Enter Roll Number: ");
    scanf("%d", &s->rollNumber);

    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &s->dob.day, &s->dob.month, &s->dob.year);

    printf("Enter Date of Admission (DD MM YYYY): ");
    scanf("%d %d %d", &s->doa.day, &s->doa.month, &s->doa.year);
}

void displayStudentDetails(const struct Student *s)
{
    printf("\nStudent Details\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->rollNumber);
    printf("Date of Birth: %02d-%02d-%4d\n", s->dob.day, s->dob.month, s->dob.year);
    printf("Date of Admission: %02d-%02d-%4d\n", s->doa.day, s->doa.month, s->doa.year);
}

int main()
{
    struct Student student;

    readStudentDetails(&student);

    displayStudentDetails(&student);

    return 0;
}
