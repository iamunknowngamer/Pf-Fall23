#include <stdio.h>
#include <string.h>

struct Worker{
    char worker_id[4];
    char name[20];
    int salary;
    char joining_date[11];
    char department[10];
};

void displayMaxSalaryWorkers(struct Worker workers[], int numWorkers){

    int maxSalaryIndex;
    printf("Coded by Syed Saif ur Rehman Shah (23k-0032)\n\nDetails of workers with maximum salary for each department:\n");
    for (int i = 0; i < numWorkers; i++){
        maxSalaryIndex = i;
        for (int j = i + 1; j < numWorkers; j++){
            if (strcmp(workers[j].department, workers[i].department) == 0 && workers[j].salary > workers[maxSalaryIndex].salary) {
                maxSalaryIndex = j;
            }
        }
        if (i == maxSalaryIndex){
            printf("\n %s | %s | %d | %s | %s |\n", workers[i].worker_id, workers[i].name, workers[i].salary, workers[i].joining_date, workers[i].department);
        }
    }
}

void fetchTotalSalariesByDepartment(struct Worker workers[], int numWorkers){

    int totalSalaries[3] = {0};
    printf("\nDepartments along with total salaries paid for each of them:\n");
    for (int i = 0; i < numWorkers; i++){
        if (strcmp(workers[i].department, "HR") == 0){
            totalSalaries[0] += workers[i].salary;
        } else if (strcmp(workers[i].department, "Admin") == 0){
            totalSalaries[1] += workers[i].salary;
        } else if (strcmp(workers[i].department, "Account") == 0){
            totalSalaries[2] += workers[i].salary;
        }
    }
    printf("\nHR - %d\n", totalSalaries[0]);
    printf("Admin - %d\n", totalSalaries[1]);
    printf("Account - %d\n", totalSalaries[2]);
}

int main(){
    struct Worker workers[] = {
        {"001", "John Doe", 100000, "2014-01-15", "HR"},
        {"002", "Jane Smith", 120000, "2014-02-01", "Admin"},
        {"003", "Vishal Singhal", 300000, "2014-02-20", "HR"},
        {"004", "Amitabh Singh", 500000, "2014-02-20", "Admin"},
        {"005", "Riya Kapoor", 150000, "2014-05-01", "Account"},
        {"006", "Vipul Diwan", 200000, "2014-06-11", "Account"},
    };
    displayMaxSalaryWorkers(workers, sizeof(workers) / sizeof(workers[0]));
    fetchTotalSalariesByDepartment(workers, sizeof(workers) / sizeof(workers[0]));
}
