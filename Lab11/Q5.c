/* Programmer: Syed Saif ur Rehman Shah
*  Description: This is the code for Question 5
*  Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

struct Employee {
    int employee_id;
    char name[50];
    float salary;
};
struct Organization {
    char organisation_name[50];
    char organisation_number[15];
    struct Employee emp;
};

int main() {
    struct Organization org;
    org.emp.employee_id = 127;
    sprintf(org.emp.name, "Linus Sebastian");
    org.emp.salary = 400000.0;

    sprintf(org.organisation_name, "NU-Fast");
    sprintf(org.organisation_number, "NUFAST123ABC");

    printf("The size of structure organization: %lu\n", sizeof(struct Organization));
    printf("Organisation Name: %s\n", org.organisation_name);
    printf("Organisation Number: %s\n", org.organisation_number);
    printf("Employee id: %d\n", org.emp.employee_id);
    printf("Employee name: %s\n", org.emp.name);
    printf("Employee Salary: %.2f\n", org.emp.salary);

    return 0;
}
