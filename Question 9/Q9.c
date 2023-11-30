#include <stdio.h>

void ascending(int inwards[100][100], int n) {
    
    int rowmin = 0, rowmax = n-1, columnmin = 0, columnmax = n-1, increment = 1;

    while (increment <= n * n) {
        
        for (int j = columnmin; j <= columnmax; j++) {
            inwards[rowmin][j] = increment++;
        }
        rowmin++;

        for (int i = rowmin; i <= rowmax; i++) {
            inwards[i][columnmax] = increment++;
        }
        columnmax--;

        for (int j = columnmax; j >= columnmin; j--) {
            inwards[rowmax][j] = increment++;
        }
        rowmax--;

        for (int i = rowmax; i >= rowmin; i--) {
            inwards[i][columnmin] = increment++;
        }
        columnmin++;
    }
    printf("\n---------------Inwards Array---------------\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%-3d", inwards[i][j]);
        }
        printf("\n");
    }
}

void descending(int outwards[100][100], int n) {
    
    int rowmin = 0, rowmax = n-1, columnmin = 0, columnmax = n-1, decrement = n*n;

    while (decrement > 0) {
        
        for (int j = columnmax; j >= columnmin; j--) {
            outwards[rowmin][j] = decrement--;
        }
        rowmin++;

        for (int i = rowmin; i <= rowmax; i++) {
            outwards[i][columnmin] = decrement--;
        }
        columnmin++;

        for (int j = columnmin; j <= columnmax; j++) {
            outwards[rowmax][j] = decrement--;
        }
        rowmax--;

        for (int i = rowmax; i >= rowmin; i--) {
            outwards[i][columnmax] = decrement--;
        }
        columnmax--;
    }
    printf("\n---------------Outwards Array---------------\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%-3d", outwards[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    int inwards[100][100];
    int outwards[100][100];
    ascending(inwards, n);
    descending(outwards,n);
}
