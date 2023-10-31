/* Programmer: Syed Saif ur Rehman Shah
* Description: This is the code for Question 2
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

void reverse(int *arr, int size)
{
    int temp;
    for(int i=0; i<size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array: ");
    for(int i=0; i<size; i++) scanf("%d", &arr[i]);
    printf("Original array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    reverse(arr,size);
    printf("\nReversed Array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    
}
