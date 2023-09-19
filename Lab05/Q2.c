#include <stdio.h>

int main() {
	int N;

	printf("What is the time: \n");
	scanf("%d", &N);

	if ( 5<N && N<11 )
	{
	printf("Good Morning\n");
	}
	else if ( 12<N && N<18 )
	{
	printf("Good Evening\n");
	}
	else if ( 18<N && N<24 )
	{
	printf("Good Night\n");
	}
	else
	{
	printf("Invalid Input\n");
	}//condition end

	return 0;

}//end main







