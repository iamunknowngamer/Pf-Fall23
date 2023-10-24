/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 6
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/
 
#include <stdio.h>

int processArray(int N, int arr[], int sum, int max, int min) {
    sum = 0;
    max = arr[0];
    min = arr[0];

    for (int i = 0; i < N; i++) {
            sum += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The sum of the array: %d\n", sum);
    printf("Maximum number: %d\nMinimum number: %d\n", max, min);
}

int main() {
    int N;
    int sum = 0;
    int max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    processArray(N,arr,sum,max,min);
}
