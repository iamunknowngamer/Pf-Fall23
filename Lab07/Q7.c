/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 7
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

#include <stdio.h>

int main()
{
    int mtrxa[2][2], mtrxb[2][2], result[2][2];
    printf("Enter the elements of first (2x2) matrix: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &mtrxa[i][j]);
        }
    }
    printf("Enter the elements of second (2x2) matrix: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &mtrxb[i][j]);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                result[i][j] += mtrxa[i][k] * mtrxb[k][j];
            }
        }
    }
    printf("Result: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }   
}
