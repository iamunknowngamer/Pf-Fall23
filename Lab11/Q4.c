/* Programmer: Syed Saif ur Rehman Shah
*  Description: This is the code for Question 4
*  Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

struct Employee {char name[50];float salary;int hoursWorked;};

void increaseSalary(struct Employee *emp) {
    if (emp->hoursWorked >= 8 && emp->hoursWorked < 10) {
        emp->salary += 50;
    } else if (emp->hoursWorked >= 10 && emp->hoursWorked < 12) {
        emp->salary += 100;
    } else if (emp->hoursWorked >= 12) {
        emp->salary += 150;
    }
}

int main() {
    struct Employee employees[3];
    
    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hoursWorked);
        printf("\n");
        increaseSalary(&employees[i]);
        }
    printf("\nEmployee Details after Salary Increase:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Final Salary: $%.2f\n", employees[i].name, employees[i].salary);
        }   
}
