/* Programmer: Syed Saif ur Rehman Shah
* Description: Printing a 2D array of prime with dynamic memory allocation of the 2D array used.
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num){
    if (num<2){
        return false;
    }
    for (int i=2; i*i<=num; i++){
        if (num%i == 0){
            return false;
        }
    }
    return true;
}
void fillWithPrimes(int** array, int rows, int cols) {
    int current = 2; 
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            while (!isPrime(current)){
                current++;
            }
            array[i][j] = current;
            current++;
        }
    }
}
void printArray(int** array, int rows, int cols) {
    for (int i =0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf(" %-3d|", array[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows = 5, cols = 5;
    int** primeArray = (int**)malloc(rows * sizeof(int*));
    for (int i=0; i<rows; i++){
        primeArray[i] = (int*)malloc(cols * sizeof(int));
    }
    fillWithPrimes(primeArray, rows, cols);
    printf("2D Array of Prime Numbers:\n");
    printArray(primeArray, rows, cols);
    for (int i=0; i<rows; i++){
        free(primeArray[i]);
    }
    free(primeArray);
}


