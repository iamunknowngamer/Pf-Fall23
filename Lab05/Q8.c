// This question, i didnt get the idea either we have to take brightness value as input and tell to what surrondings is the cell phone being exposed too,
// or either we need to take the surroundings of the user as input then tell the brightness level.



#include <stdio.h>

int main() {

	int N;
	printf("Enter a value of brightness (0-1000): \n");
	scanf("%d", &N);
	if (N > 500)
	{
    	printf("The cell phone is exposed under sunlight.");                                   
	}
	else if ( N>=0 && N<=100)
	{
	    printf("The cell phone is being used at evening.");
	}
    else if ( N>=100 && N<=500)
    {
        printf(" The cell phone is under white light.");
    }

    return 0;
	
}
