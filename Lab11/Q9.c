#include <stdio.h>

struct Register {
    int courseId;
    char courseName[50];
};

struct Student {
    char studentId[50];
    char firstName[50];
    char lastName[50];
    char cellNo[15];
    char email[50];
    struct Register registration;
};

void inputStudent(struct Student *student) {
    printf("Enter Student ID: ");
    fgets(student->studentId, sizeof(student->studentId), stdin);
    strtok(student->studentId, "\n");

    printf("Enter First Name: ");
    scanf("%s", student->firstName);

    printf("Enter Last Name: ");
    scanf("%s", student->lastName);

    printf("Enter Cell No: ");
    scanf("%s", student->cellNo);

    printf("Enter Email: ");
    scanf("%s", student->email);

    printf("Enter Course ID: ");
    scanf("%d", &student->registration.courseId);

    printf("Enter Course Name: ");
    scanf("%s", student->registration.courseName);
}

void displayStudent(struct Student student) {
    printf("\nStudent ID: %s\n", student.studentId);
    printf("First Name: %s\n", student.firstName);
    printf("Last Name: %s\n", student.lastName);
    printf("Cell No: %s\n", student.cellNo);
    printf("Email: %s\n", student.email);
    printf("Course ID: %d\n", student.registration.courseId);
    printf("Course Name: %s\n", student.registration.courseName);
}

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        inputStudent(&students[i]);
    }
    printf("\nDetails of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        displayStudent(students[i]);
    }
}
