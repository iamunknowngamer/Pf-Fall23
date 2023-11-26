#include <stdio.h>

// Function to check if a number is a Ramanujan-Hardy number
int isRamanujanHardy(int num) {
    int i, j;

    // Loop through all possible pairs of cubes
    for (i = 1; i <= num; i++) {
        for (j = i; j <= num; j++) {
            if (i * i * i + j * j * j == num && i != j) {
                // Found a pair of cubes that sum to the number
                return 1;
            }
        }
    }

    return 0;
}

// Function to find and display Ramanujan-Hardy numbers less than n^3
void findRamanujanHardy(int n) {
    printf("Ramanujan-Hardy numbers less than %d^3:\n", n);

    // Loop through all numbers less than n^3
    for (int num = 1; num < n * n * n; num++) {
        if (isRamanujanHardy(num)) {
            printf("%d\n", num);
        }
    }
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Find and display Ramanujan-Hardy numbers less than n^3
    findRamanujanHardy(n);

    return 0;
}
