/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 8
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

#include <stdio.h>

int main()
{
    int N,temp,min;
    printf("Enter the size of array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the elements of array: ");
    
    for(int i=0; i<N; i++) scanf("%d", arr[i]);
    
    for(int j=0; j<N; j++){
        temp = arr[j];
        for(int k=j+1; j<N; j++){
            if(temp < arr[k]){
                
            }
        }
    }
    
    
}
