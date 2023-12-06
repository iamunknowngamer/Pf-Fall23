/* Programmer: Syed Saif ur Rehman Shah
* Description: Casting viod pointer as per user input data type.
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

void print(void* arr, int size, char datatype) {
    for (int i = 0; i < size; i++) {
        switch (datatype) {
            case 'i': // Integer
                printf("%d ", *((int*)arr + i));
                break;
            case 'd': // Double
                printf("%.2f ", *((double*)arr + i));
                break;
            case 'c': // Charachter
                printf("%c ", *((char*)arr + i));
                break;
            default:
                printf("Unsupported data type\n");
                return;
        }
    }
    printf("\n");
}

int main() {
    int int_array[] = {1, 2, 3, 4, 5};
    double double_array[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    char char_array[] = {'A', 'B', 'C', 'D', 'E'};

    printf("Printing int_array: ");
    print(int_array, sizeof(int_array) / sizeof(int), 'i');

    printf("Printing double_array: ");
    print(double_array, sizeof(double_array) / sizeof(double), 'd');

    printf("Printing char_array: ");
    print(char_array, sizeof(char_array) / sizeof(char), 'c');
}

