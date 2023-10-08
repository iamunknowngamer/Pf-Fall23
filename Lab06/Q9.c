/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Practicing Programming.
*/

#include <stdio.h>

int main()
{
    int N,max,min;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d numbers separated by space: ", N);
    
    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = min = arr[0];
    
    for(int j=N-1; j>=0; j--)
    {
        if (min > arr[j])
        {
            min = arr[j];
        }   
        if (max < arr[j])
        {
            max = arr[j];
        }
    }
    
    printf("Maximum number: %d\nMinimum number: %d", max , min);

}//end
