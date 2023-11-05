/* Programmer: Syed Saif ur Rehman Shah
* Description: This is the code for Question 8(bubble sort method)
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

#include <stdio.h>

int main()
{
    int n, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The sorted array is: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
}
