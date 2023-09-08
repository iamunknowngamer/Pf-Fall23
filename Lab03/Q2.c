#include <stdio.h>

int main() {
        int a;
	int b;
	int c;
	printf("What is Height: ");
	scanf("%d",&a);
	printf("What is Width: ");
	scanf("%d",&b);
	printf("What is Length: ");
	scanf("%d",&c);
	int volume = a*b*c;
	printf("Volume is : %d",volume);
}//end main