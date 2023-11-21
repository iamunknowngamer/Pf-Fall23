/* Programmer: Syed Saif ur Rehman Shah
*  Description: This is the code for Question 1
*  Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/


#include <stdio.h>
#include <string.h>

struct Student {int rollNumber;char name[50];char department[50];char course[50];int yearOfJoining;};

void printStudentsByYear(struct Student students[], int n, int targetYear) {
    printf("Students who joined in the year %d:\n", targetYear);
    int i;
    for(i = 0; i < n; i++) {
        if (students[i].yearOfJoining == targetYear) {
            printf("%s\n", students[i].name);
        }
    }
}
void printStudentByRollNumber(struct Student students[], int n, int targetRollNumber) {
	int i;
    for (i = 0; i < n; i++) {
        if (students[i].rollNumber == targetRollNumber) {
            printf("Student Data:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return;
        }
    }
	printf("Student with Roll Number %d not found.\n", targetRollNumber);
}

int main() {
    struct Student students[450] = {
        {101, "John Doe", "Computer Science", "B.Tech", 2021},
        {102, "Jane Smith", "Electrical Engineering", "B.Tech", 2020},
    };
    printStudentsByYear(students, 2, 2021);
    printStudentByRollNumber(students, 2, 102);
}


