/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Using 1D array to find the elements that sum up to a required value.
*/

#include <stdio.h>

void check(int N, int A[], int S)
{
    int start = 0, end = 0, sum = 0, found = 0;
    for(int i=0; i<N; i++)
    {
        sum += A[i];
        while (sum > S) 
        {
            sum -= A[start];
            start++;
        }
        if(sum == S)
        {
            end = i;
            found = 1;
            break;
        }
    }
    if(found) printf("The Elements from Index %d to %d when summed results in the output of %d.\n", start, end, S);
    else printf("No subarray found!");
}
int main()
{
    int N,sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &N);
    
    int A[N];
    printf("Enter the elements of the array: ");
    for(int i=0; i<N; i++) scanf("%d", &A[i]);
    
    int S;
    printf("Specify a value for S: ");
    scanf("%d", &S);
    
    check(N,A,S);
}
