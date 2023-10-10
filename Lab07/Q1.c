/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 1
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/


#include <stdio.h>

int main()
{
	int N1,N2;
	printf("Enter two numbers (N1/N2): ");
	scanf("%d%d",&N1,&N2);
	int q=0;
	while (N1>=N2)
	{
		N1 = N1 - N2;
		q = q + 1;
	}
	printf("The quotient is: %d",q);
	printf("\nThe remainder is: %d", N1);
	return 0;
}//end
