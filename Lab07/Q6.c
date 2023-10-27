/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 6
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n],frequency[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        frequency[i] = 1;
    }
    for (int i = 0; i < n; i++) 
    {
        int count = 1;
        for (int j = i + 1; j < n; j++) 
        {
            if(arr[i] == arr[j]) {
                count++;
                frequency[j] = 0; // Mark as counted
            }
        }
        if(frequency[i] != 0) 
        {
            frequency[i] = count;
        }
    }
    printf("Frequency of elements in the array:\n");
    for (int i = 0; i < n; i++) 
    {
        if (frequency[i] != 0) 
        {
            printf("Frequency of %d = %d\n", arr[i], frequency[i]);
        }
    }
}
