#include <stdio.h>

int main() {
	
	char N;
	
	printf("Are You sure to delete:\n [Y/y] / [N/n]\n");
	scanf("%c", &N);

	switch (N) 
	{
	case 'Y':
		printf("Deleted successfully");
		break;
	case 'y':
		printf("Deleted successfully");
		break;
	case 'N':
		printf("Delete canceled");
		break;
	case 'n':
		printf("Delete canceled");
		break;
	
	}//condition end

	return 0;

}//end main