/* Programmer: Syed Saif ur Rehman Shah
* Description: This is the code for Question 8(bubble sort method)
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n{");
    for (int i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

