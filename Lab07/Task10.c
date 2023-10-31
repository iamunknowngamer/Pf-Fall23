/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Using 1D array to find the elements that sum up to a required value.
*/

#include <stdio.h>

int main() {
    int N, S;
    printf("Enter Number S: ");
    scanf("%d", &S);
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int A[N];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    int start = 0, end = 0;
    int sum = 0;
    int found = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
        while (sum > S) {
            sum -= A[start];
            start++;
        }
        if (sum == S) {
            end = i;
            found = 1;
            break;
        }
    }
    if (found) {
        printf("The Elements from Index %d to %d when summed results in the output of %d.\n", start, end, S);
    } else {
        printf("No subarray found with the given sum %d.\n", S);
    }
}
