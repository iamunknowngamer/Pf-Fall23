/* Programmer: Syed Saif ur Rehman Shah
* Description: You can customzie the file as you want and it will still work but you need to place commas, this program will display an excel format sheet (table or data).
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_BUFFER_SIZE 100

int format_line(char str[100])
{
    char delim[2] = ",";
    int cols = 0;
    char *col = strtok(str, delim);
    while (col != NULL) {
        cols++;
        col[strcspn(col, "\n")] = 0; 
        printf("%-14s | ", col);
        col = strtok(NULL, delim);
    }
    printf("\n");
    return cols;
} 

void read_file(FILE *fptr)
{
    char buffer[MAX_BUFFER_SIZE];
    int rows = 0, cols = 0;
    while (!feof(fptr)) {
        rows = format_line(fgets(buffer, MAX_BUFFER_SIZE, fptr)); 
        cols++;
    }
    printf("\n\nrows: %d, cols: %d", cols, rows);
} 
int main()
{
    FILE *fptr = fopen("Homies.txt", "r");
    read_file(fptr);
    fclose(fptr);
}
