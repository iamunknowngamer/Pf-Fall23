#include <stdio.h>

int main() {

	int N;
	printf("Enter a value of brightness (0-1000): \n");
	scanf("%d", &N);
	if (N > 500)
	{
    	printf("The cell phone is exposed under sunlight, brightness increases");
	}
	else if ( N>=0 && N<=100)
	{
	    printf("The cell phone is being used at evening, brightness decreases");
	}
    else if ( N>=100 && N<=500)
    {
        printf(" The cell phone is under white light, brightness increases");
    }

    return 0;
	
}
