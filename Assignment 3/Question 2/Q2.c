#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_DEPARTMENTS 4
#define NUM_ROLES 5
#define NUM_EMPLOYEES (NUM_DEPARTMENTS * NUM_ROLES)
#define NAME_POOL_SIZE 20

struct Employee{
    char name[30];
    char role[20];
    int communication;
    int teamwork;
    int creativity;
};

struct Department{
    char name[20];
    struct Employee employees[NUM_ROLES];
};

int getRandomNumber(int min, int max){
    return rand() % (max - min + 1) + min;
}

void initializeNamePool(char namePool[NAME_POOL_SIZE][30]){
    strcpy(namePool[0], "John");
    strcpy(namePool[1], "Jane");
    strcpy(namePool[2], "David");
    strcpy(namePool[3], "Emily");
    strcpy(namePool[4], "Michael");
    strcpy(namePool[5], "Olivia");
    strcpy(namePool[6], "Robert");
    strcpy(namePool[7], "Sophia");
    strcpy(namePool[8], "William");
    strcpy(namePool[9], "Emma");
    strcpy(namePool[10], "James");
    strcpy(namePool[11], "Ava");
    strcpy(namePool[12], "Matthew");
    strcpy(namePool[13], "Isabella");
    strcpy(namePool[14], "Daniel");
    strcpy(namePool[15], "Mia");
    strcpy(namePool[16], "Christopher");
    strcpy(namePool[17], "Amelia");
    strcpy(namePool[18], "Andrew");
    strcpy(namePool[19], "Ethan");
}

void initializeDepartment(struct Department *department, char namePool[NAME_POOL_SIZE][30]){
    strcpy(department->name, namePool[getRandomNumber(0, NAME_POOL_SIZE - 1)]);

    char roles[NUM_ROLES][20] = {"Director", "Executive", "Manager", "Employee", "Trainee"};

    for (int i = 0; i < NUM_ROLES; i++){
        strcpy(department->employees[i].name, namePool[getRandomNumber(0, NAME_POOL_SIZE - 1)]);
        strcpy(department->employees[i].role, roles[i]);
        department->employees[i].communication = getRandomNumber(1, 100);
        department->employees[i].teamwork = getRandomNumber(1, 100);
        department->employees[i].creativity = getRandomNumber(1, 100);
    }
}

void printDepartment(struct Department *department){
    printf("%-15s %-15s %-15s %-15s %-15s %-15s\n", "Department", "Role", "Name", "Communication", "Teamwork", "Creativity");
    for (int i = 0; i < NUM_ROLES; i++) {
        printf("%-15s %-15s %-15s %-15d %-15d %-15d\n", department->name, department->employees[i].role,
               department->employees[i].name, department->employees[i].communication,
               department->employees[i].teamwork, department->employees[i].creativity);
    }
    printf("\n");
}

int main(){
    srand(time(NULL));

    char namePool[NAME_POOL_SIZE][30];
    initializeNamePool(namePool);

    struct Department departments[NUM_DEPARTMENTS];

    for (int i = 0; i < NUM_DEPARTMENTS; i++){
        initializeDepartment(&departments[i], namePool);
        printDepartment(&departments[i]);
    }

    int sumValues[NUM_DEPARTMENTS] = {0};
    for (int i = 0; i < NUM_DEPARTMENTS; i++){
        for (int j = 0; j < NUM_ROLES; j++){
            sumValues[i] += departments[i].employees[j].communication +
                            departments[i].employees[j].teamwork +
                            departments[i].employees[j].creativity;
        }
    }

    int bestDepartmentIndex = 0;
    int maxSum = sumValues[0];
    for (int i = 1; i < NUM_DEPARTMENTS; i++){
        if (sumValues[i] > maxSum) {
            maxSum = sumValues[i];
            bestDepartmentIndex = i;
        }
    }
    printf("Department with the Best Values:\n");
    printf("%-15s %-15s\n", "Department", "Total Values");

    for (int i = 0; i < NUM_DEPARTMENTS; i++){
        printf("%-15s %-15d\n", departments[i].name, sumValues[i]);
    }
    printf("\nBest Department: %s\n", departments[bestDepartmentIndex].name);
}

