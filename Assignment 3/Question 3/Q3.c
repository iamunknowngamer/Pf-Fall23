#include <stdio.h>
#include <stdlib.h>

struct Record {
    int id;
    char name[50];
    double salary;
};

void mergeAndWrite(char *personalFileName, char *departmentFileName, char *combineFileName, int *recordIDs, int numRecords){
    FILE *personalFile = fopen(personalFileName, "r");
    FILE *departmentFile = fopen(departmentFileName, "r");
    FILE *combineFile = fopen(combineFileName, "a");

    if (personalFile == NULL || departmentFile == NULL || combineFile == NULL){
        perror("Error opening files");
        exit(EXIT_FAILURE);
    }

    struct Record personalRecord;
    struct Record departmentRecords[100]; 

    int numDepartmentRecords = 0;

    while(fscanf(departmentFile, "%d %lf", &departmentRecords[numDepartmentRecords].id, &departmentRecords[numDepartmentRecords].salary) != EOF){
        numDepartmentRecords++;
    }

    while (fscanf(personalFile, "%d %49[^\n]", &personalRecord.id, personalRecord.name) != EOF){
        for (int i = 0; i < numDepartmentRecords; i++){
            if (personalRecord.id == departmentRecords[i].id){
                fprintf(combineFile, "%d %s %.2lf\n", personalRecord.id, personalRecord.name, departmentRecords[i].salary);
                break;
            }
        }
    }
    fclose(personalFile);
    fclose(departmentFile);
    fclose(combineFile);
}

int main(){
    int recordIDs[] = {101, 103};
    char personalFileName[] = "personal.txt";
    char departmentFileName[] = "department.txt";
    char combineFileName[] = "combine.txt";
    mergeAndWrite(personalFileName, departmentFileName, combineFileName, recordIDs, sizeof(recordIDs) / sizeof(recordIDs[0]));
    printf("Coded by Syed Saif ur Rehman Shah (23k-0032)\nRecords merged and written to combine.txt successfully.\n");
}
