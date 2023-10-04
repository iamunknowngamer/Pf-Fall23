/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Practicing Programming.
*/

#include <stdio.h>

int main()
{	
	printf("The Fibonacci Series:0");
	int A=0;
	int B=1;
	int Sum = A + B;
	int Sum2 = 0;

	for(int i=0; B<=10000; i++)
	{
		A = B;
		B = Sum;
		Sum = A + B;
		printf(" %d", A);
			if (A%3==0 || A%5==0 || A%7==0)
			{
				Sum2 += A;
			}
	}
	
	printf("\nThe sum of fibonacci series only divisible by 3,5 or 7 only is: %d", Sum2);
	
}//end
