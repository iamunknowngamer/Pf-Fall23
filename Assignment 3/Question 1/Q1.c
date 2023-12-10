#include <stdio.h>
#include <stdlib.h>

#define MAX_BUFFER_SIZE 100

//Dynamic allocation of the matrix
int **create_matrix(int rows, int cols){
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++){
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}

//Function to read the matrix from a file
void read_matrix_from_file(FILE *fp, int **matrix, int rows, int cols){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (fscanf(fp, "%d", &matrix[i][j]) != 1){
                perror("Error reading from file");
                exit(EXIT_FAILURE);
            }
        }
    }
}

//Function to find the sum of the largest values of nxn sub-matrices
int sum_of_largest_values(int **matrix, int rows, int cols, int n){
    int sum = 0;
    for (int i = 0; i <= rows - n; i++){
        for (int j = 0; j <= cols - n; j++){
            int max_val = matrix[i][j];
            for (int k = 0; k < n; k++){
                for (int l = 0; l < n; l++){
                    if (matrix[i + k][j + l] > max_val){
                        max_val = matrix[i + k][j + l];
                    }
                }
            }
            sum += max_val;
        }
    }
    return sum;
}

void free_matrix(int **matrix, int rows){
    for (int i = 0; i < rows; i++){
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    FILE *fp = fopen("matrix.txt", "r");
    if (fp == NULL){
        perror("Error opening file");
        return 1;
    }

    int rows = 8;
    int cols = 8;
    int **matrix = create_matrix(rows, cols);

    read_matrix_from_file(fp, matrix, rows, cols);
    fclose(fp);

    int n;
    printf("Code made by Syed Saif ur Rehman Shah (23k-0032)\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0 || n > rows || n > cols){
        printf("Invalid value of n. It should be a positive integer less than or equal to rows and columns.\n");
        return 1;
    }

    int result = sum_of_largest_values(matrix, rows, cols, n);
    printf("Sum of largest values of %dx%d sub-matrices: %d\n", n, n, result);

    free_matrix(matrix, rows);
}

