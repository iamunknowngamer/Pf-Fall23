/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Practicing Programming.
*/

#include <stdio.h>

int main() 
{

	int a,b,gcd;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	if (a>b) gcd=b;
	else if (b>a) gcd=a;
	
	while(1)
	{
	
		if (a%gcd==0)
		{
			if (b%gcd==0)
			{
				printf("The GCD is: %d", gcd);	
				break;
			}
				
		}
			gcd--;
	}	
	
	int lcm = (a*b)/gcd;
	printf(" , while the LCM is %d", lcm);

	return 0;
	
}//end
