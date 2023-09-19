#include <stdio.h>

int main() {
	int N;
	printf("Enter a number: ");
	scanf("%d", &N);

	if (N%3 == 0)
	{
	printf("This number is multiple of 3\n");
	}
	else
	{
	printf("This number is not multiple of 3\n");
	}//condition end

	return 0;

}//end main