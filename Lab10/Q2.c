/* Programmer: Syed Saif ur Rehman Shah
* Description: Reversing the values of two nunbers, by casting to unsigned char and using variable type size_t.
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

void swap(void* a, void* b, size_t size){
    unsigned char* byteA = (unsigned char*)a;
    unsigned char* byteB = (unsigned char*)b;

    for(size_t i = 0; i < size; ++i){
        *byteA ^= *byteB;
        *byteB ^= *byteA;
        *byteA ^= *byteB;

        ++byteA;
        ++byteB;
    }
}

int main(){
    //with integers
    int num1 = 5;
    int num2 = 10;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("\nAfter swap: num1 = %d, num2 = %d\n\n", num1, num2);

printf("----------x------------x------------x-----------x\n\n");

    //with doubles
    double dbl1 = 3.14;
    double dbl2 = 6.28;
    printf("Before swap: double1 = %.2f, double2 = %.2f\n", dbl1, dbl2);
    swap(&dbl1, &dbl2, sizeof(double));
    printf("\nAfter swap: double1 = %.2f, double2 = %.2f\n", dbl1, dbl2);
}
