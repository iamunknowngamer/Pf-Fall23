/* Programmer: Syed Saif ur Rehman Shah
* Description: This is the code for Question 1
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

int factorial(int N)
{
    if(N==1 || N==0) return 1;
    else return N * factorial(N-1);
}

int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    factorial(N);
    printf("The factorial of %d is: %d", N, factorial(N));
}
