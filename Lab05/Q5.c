#include <stdio.h>

	
int main() {
	
	char N;
	printf("Enter anything: \n");
	scanf("%c", &N);
	
	if ( N>=65 && N<=90)
	{
		printf("It is a uppercase letter");
	}
	
	else if ( N>=97 && N<=122)
	{
		printf("It is a lowercase letter");
	}
	
	else if ( N>=48 && N<=57)
	{
		printf("It is a digit");
	}
	
	else if ( N>=32 && N<=47)
	{
		printf("It is a special character");
	}
	
	else if ( N>=58 && N<=64)
	{
		printf("It is a special character");
	}	

	else if ( N>=91 && N<=96)
	{
		printf("It is a special character");
	}
		

	else if ( N>=123 && N<=126)
	{
		printf("It is a special character");
	}

	else
	{
		printf("Invalid Input");
	}                                                             //big condition end	

	return 0;

	}//end