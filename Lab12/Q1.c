/* Programmer: Syed Saif ur Rehman Shah
* Description: You can customzie the file as you want and it will still work but you need to place commas, this program will display an excel format sheet (table or data).
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>
#include <string.h>

void find(FILE *t1){

    int cols=0,rows=1;
    char buffer[100];

    if((fgets(buffer, 100, t1)) != NULL){
        char *token = strtok(buffer, ",");
        while(token != NULL){
            cols++;
            token = strtok(NULL, ",");
        }
    }
    while((fgets(buffer, 100, t1)) != NULL) rows++;
    
    printf("The rows are %d\nThe columns are %d\nThe data in the file is;\n", rows, cols);
    fseek(t1, 0, SEEK_SET);
    while(fgets(buffer, 100, t1) != NULL){
        char *token = strtok(buffer, ",");
        while(token != NULL){
            printf("%-15s", token);
            token = strtok(NULL, ",");
        }
        printf("\n");
    }
}

int main(){
    FILE *t1 = fopen("T1.txt", "r");
    find(t1);
    fclose(t1);
}
