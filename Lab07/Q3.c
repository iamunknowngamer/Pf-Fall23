/* Programmer: Syed Saif ur Rehman Shah
* Description: This is the code for Question 3
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

#include <stdio.h>

int main() {
    int N, n, r, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &N);
	n = N;
    while (N != 0) {
        r = N % 10;
        sum += r;
        N = N/10;
    }
    printf("\nSum of digits in %d = %d", n, sum);
	return 0;
}//end
