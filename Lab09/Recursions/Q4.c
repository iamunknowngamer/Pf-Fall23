/* Programmer: Syed Saif ur Rehman Shah
* Description: This is the code for Question 4
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

int find(int N){
    if(N<=1) return N;
    else return find(N-1) + find(N-2);
}
int main(){
    int N;
    printf("Enter a number : ");
    scanf("%d", &N);
    printf("The %d Fibonacci numbers are: \n", N);
    for(int i=0;i<N;i++){
        printf("%d ",find(i));
    }
}
