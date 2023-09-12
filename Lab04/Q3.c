/* Programmer: Syed Saif ur Rehman Shah
* Date: 9/12/2023
* Description: This is the code for Question 1
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

//--Include Files--//
#include <stdio.h>
#include <stdlib.h>
//--Global Variables--//

int main() {
	int a;
	int b;
	printf("What is the 1st number: ");
	scanf("%d", &a);
	printf("What is the 2nd number: ");
	scanf("%d", &b);
	int c = a*a;
	int d = b*b;
	printf("----Press 'S' key then press enter for output----");
	int sum = c + d;
	scanf("%d", &sum);
	printf("Sum is: %d", sum);
	return 0;
}//end main
	
	
	