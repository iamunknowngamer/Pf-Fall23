/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Practicing Programming.
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter %d numbers separated by space: ", N);
    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Uno Reverse Card... \n");
    sleep(1);
    for (int j=N-1; j>=0; --j)
    {
        printf(" %d", arr[j]);
    }
}//end
