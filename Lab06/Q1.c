/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Practising Programming.
*/

#include <stdio.h>

int main()
{
	int N;
	int k=0;
	printf("Enter a number: ");
	scanf("%d", &N);
	
	for (int i=1; i<N ; i++)
	{
		
		if (N%i==0)
		{
			k += i;
		}
	
	}
	if (k==N)
	{
		printf("\nIt is a perfect number");
	}
	else
	{
		printf("\nIt is not a perfect number");
	}
}//end
