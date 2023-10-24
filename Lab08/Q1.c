/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 1
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/

#include <stdio.h>

void swap(int a, int b)
{
	int temp = a; //temporarily storing a in this integer
	a = b; //swapping value of a with b
	b = temp; // swapping value of b with a
	printf("The numbers after swapping are: %d %d",a,b);
}

int main()
{
	int N1,N2;
	printf("Enter two integers: ");
	scanf("%d%d",&N1,&N2);
	
	printf("The numbers you entered are: %d %d\n",N1,N2);
	
	swap(N1,N2);
}
