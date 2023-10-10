/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 2
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

#include <stdio.h>

int main()
{
	int N,d;
	printf("Enter the value of 'd' : ");
	scanf("%d",&d);
	printf("\nEnter the number of elements you want to store in array: ");
	scanf("%d",&N);
	int arr[N];
	printf("\nEnter the numbers separated by space: \n");
	for(int i=0; i<N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int j=d; j<N; j++)
	{
		printf("%d ", arr[j]);
	}
	for(int k=0; k<d; k++)
	{
		printf("%d ", arr[k]);
	}
	return 0;
}//end
