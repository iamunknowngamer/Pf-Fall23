#include <stdio.h>

int main() {
	
	int N,h,l;
	
	printf("Enter a 8 bit binary value: \n");
	
	scanf("%8d", &N);
	
	if (N==11111111 && N==00000000)
	{
		printf("Invalid Input");
	}
	
	h = N % 10000;
	l = N / 10000;
	
	printf("%4d %4d", h, l);
	
	return 0;
}
