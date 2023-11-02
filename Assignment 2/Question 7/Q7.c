#include <stdio.h>

void bubbleSort(int ages[], float prices[], int n) {
    int i, j;
    int temp_age;
    float temp_price;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ages[j] > ages[j + 1] || (ages[j] == ages[j + 1] && prices[j] < prices[j + 1])) {
                temp_age = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = temp_age;
                temp_price = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp_price;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of shirts: ");
    scanf("%d", &n);

    int ages[n];
    float prices[n];
    for (int i = 0; i < n; i++) {
        printf("Enter age for shirt %d: ", i + 1);
        scanf("%d", &ages[i]);
        printf("Enter price for shirt %d: ", i + 1);
        scanf("%f", &prices[i]);
    }
    bubbleSort(ages, prices, n);
    printf("\nSorted list in ascending order with respect to Age:\n");
    for (int i = 0; i < n; i++) {
        printf("Age: %d, Price: %.2f\n", ages[i], prices[i]);
    }
    printf("\nSorted list in descending order with respect to Price:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("Age: %d, Price: %.2f\n", ages[i], prices[i]);
    }
}
