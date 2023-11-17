/* Programmer: Syed Saif ur Rehman Shah
* Description: This is the code for Question 3
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    
    int arr[10] = {1,2,3,4,5,6};
    char brr[10] = {'s','a','i','f'};
    long long int grr[10] = {10,20,30,40,50,60}; 
    
    int *a = arr;
    char *b = brr;
    long long int *c = grr;
    
    printf("1) Addresses and Values of Type int: \n");
    for(int i=0; i<N; i++)
    {
        printf("R = %d, L = %p.", *(a+i), a+i);
    }
    printf("\n\n2) Addresses and Values of Type char: \n");
    for(int i=0; i<N; i++)
    {
        printf("R = %c, L = %p.", *(b+i), b+i);
    }
    printf("\n\n3) Addresses and Values of Type long long int: \n");
    for(int i=0; i<N; i++)
    {
        printf("R = %d, L = %p.", *(c+i) , c+i);
    }
}
