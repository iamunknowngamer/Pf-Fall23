/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Practicing Programming.
*/

#include <stdio.h>

int main()
{
    int N;
    int sum = 0;
    printf("Enter the number of values you want to sum: ");
    scanf("%d", &N);
    int arr[N];
    
    for (int i=1; i<=N; i++)
    {
        printf("\nNumber %d: ", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    
    printf("\nThe sum is: %d", sum);

}//end
