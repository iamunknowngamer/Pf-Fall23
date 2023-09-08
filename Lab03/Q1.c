#include <stdio.h>
#include <math.h>

int main() {
        float a;
	float b;
	printf("length of perpendicular: ");
	scanf("%f", &a); 
	printf("length of base: ");
	scanf("%f", &b);
	float Hypotenuse = sqrt((a*a) + (b*b));
	printf("Hypotenuse is %f", Hypotenuse);
}//end main