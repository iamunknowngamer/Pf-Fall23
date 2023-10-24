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
