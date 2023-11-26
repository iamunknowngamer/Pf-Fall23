#include <stdio.h>

int min(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

void findLargestSquareSubmatrix(int rows, int cols, int matrix[rows][cols]) {
    int dp[rows][cols];
    int max_size = 0, max_i, max_j;

    for (int i = 0; i < rows; i++) {
        dp[i][0] = matrix[i][0];
        if (matrix[i][0] == 1) {
            max_size = 1;
            max_i = i;
            max_j = 0;
        }
    }
    for (int j = 0; j < cols; j++) {
        dp[0][j] = matrix[0][j];
        if (matrix[0][j] == 1) {
            max_size = 1;
            max_i = 0;
            max_j = j;
        }
    }

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 1) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + 1;
                if (dp[i][j] > max_size) {
                    max_size = dp[i][j];
                    max_i = i;
                    max_j = j;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    printf("The largest square submatrix of 1s is:\n");
    for (int i = max_i; i > max_i - max_size; i--) {
        for (int j = max_j; j > max_j - max_size; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Dimensions (rows x columns): %d x %d\n", max_size, max_size);
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the binary matrix (0 or 1):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    findLargestSquareSubmatrix(rows, cols, matrix);

}
