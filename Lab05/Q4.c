#include <stdio.h>

int main() {

	char operator;
	int num1,num2;
	int ans;
	printf("Enter an operator:\n (+,-,*,/)\n");
	scanf("%c", &operator);
	printf("Enter two numbers: ");
	scanf("%d%d", &num1,&num2);
	
	switch (operator) 
	{

	case '+':
		ans = num1 + num2;
		printf("%d", ans);
		break;
	case '-':
		ans = num1 - num2;
		printf("%d", ans);
		break;
	case '*':
		ans = num1 * num2;
		printf("%d", ans);
		break;
	case '/':
		ans = num1 / num2;
		printf("%d", ans);
		break;
	}
				

	return 0;

}//end main










