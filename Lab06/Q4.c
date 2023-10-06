/**
 * Programmer: Syed Saif ur Rehman Shah.
 * Description: Practicing Programming.
*/



#include <stdio.h>

int main()
{
	int a,b,i;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	for(i=a; i<=b; i++)
	{
		if (a<=9)	
		{
			switch (i)
			{
				case 0:
					printf("zero");
				case 1:
					printf("one");
				case 2:
					printf("two");
				case 3:
					printf("three");
				case 4:
					printf("four");
				case 5:
					printf("five");
				case 6:
					printf("six");
				case 7:
					printf("seven");
				case 8:
					printf("eight");
				case 9:
					printf("nine");
			}
			
		}
	
	}

}
