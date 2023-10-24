/* Programmer: Syed Saif ur Rehman Shah
* Date: 10/10/2023
* Description: This is the code for Question 2
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/blob/main/Lab06/Q6.c
*/
#include <stdio.h>

float calculate(float num1, float num2, char operator) {
    switch (operator) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) return num1 / num2;
            else 
			{
                printf("Error: Division by zero is not allowed.\n");
                return 0.0;
            }
        default:
            printf("Error: Invalid operator.\n");
            return 0.0;
    }
}

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f%f",&num1,&num2);

    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c", &operator);

    result = calculate(num1, num2, operator);

    printf("Result: %.2f\n", result);
    
}
