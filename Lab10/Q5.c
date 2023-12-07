/* Programmer: Syed Saif ur Rehman Shah
* Description: Using <time.h> to display the time taken to allocate memory for arrays in different ways.
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 100
#define N 100

void multiplyAndDivide(int** array, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = (array[i][j] * 3) / 2;
        }
    }
}

int main() {
    int i, j;
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int** array1 = (int**)malloc(M * sizeof(int*));
    for (i = 0; i < M; i++) {
        array1[i] = (int*)malloc(N * sizeof(int));
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken for multiple malloc calls: %f seconds\n", cpu_time_used);
    
    start = clock();
    int** array2 = (int**)malloc(M * sizeof(int*));
    array2[0] = (int*)malloc(M * N * sizeof(int));
    for (i = 1; i < M; i++) {
        array2[i] = array2[0] + i * N;
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken for two malloc calls: %f seconds\n", cpu_time_used);

    start = clock();
    multiplyAndDivide(array1, M, N);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken for function (multiple malloc calls): %f seconds\n", cpu_time_used);

    start = clock();
    multiplyAndDivide(array2, M, N);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken for function (two malloc calls): %f seconds\n", cpu_time_used);

    for (i = 0; i < M; i++) {
        free(array1[i]);
    }
    free(array1);
    free(array2[0]);
    free(array2);

}
