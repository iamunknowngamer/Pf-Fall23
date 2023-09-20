#include <stdio.h>

int main() {

	int N;
	printf("Enter a value of brightness (0-1000): \n");
	scanf("%d", &N);
	if (N > 500)
	{
    	printf("----High Brightness----");                                   
	}
	else if ( N>=0 && N<=100)
	{
	    printf("----Low Brightness----");
	}
    else if ( N>=100 && N<=500)
    {
        printf("----Medium Brightness----");
    }

    return 0;
	
}
