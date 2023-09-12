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
	 int n, num, sum = 0;
	 printf("Define any number: ");
	 scanf("%d", &n);
	
	for (int i = 0; i < n; i++) 
	{
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        sum += num * num;
    }
	printf("The sum of the squares is: %d\n", sum);
	return 0;
}//end main
	
	
	
