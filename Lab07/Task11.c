/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Using arrays to identify the max values of consecutive 3x3 matrices in any nxn matrix.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int grid[n][n];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    // Initialize the size of the "maxLocal" matrix
    int maxLocalSize = n - 2;
    int maxLocal[maxLocalSize][maxLocalSize];

    // Find the maximum values in each 3x3 submatrix
    for (int i = 0; i < maxLocalSize; i++) {
        for (int j = 0; j < maxLocalSize; j++) {
            int max = grid[i][j];
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    if (grid[i + k][j + l] > max) {
                        max = grid[i + k][j + l];
                    }
                }
            }
            maxLocal[i][j] = max;
        }
    }

    // Print the "maxLocal" matrix
    printf("Generated maxLocal matrix:\n");
    for (int i = 0; i < maxLocalSize; i++) {
        for (int j = 0; j < maxLocalSize; j++) {
            printf("%d ", maxLocal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
