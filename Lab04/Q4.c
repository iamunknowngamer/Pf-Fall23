/* Programmer: Syed Saif ur Rehman Shah
* Date: 9/12/2023
* Description: This is the code for Question 4
* Related files: https://github.com/iamunknowngamer/Pf-Fall23/tree/main/Lab03
*/

//--Include Files--//
#include <stdio.h>
#include <math.h>
//--Global Variables--//

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Ask Co-efficients
    printf("Enter the coefficient a: ");
    scanf("%lf", &a);

    printf("Enter the coefficient b: ");
    scanf("%lf", &b);

    printf("Enter the coefficient c: ");
    scanf("%lf", &c);

    // Calculating discriminant
    discriminant = b * b - 4 * a * c;

    // Roots will be given only if they are real
    if (discriminant >= 0) {
        // Calculate the roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        // Display the roots
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else {
        // Not real roots
        printf("No real roots exist.\n");
    }

    return 0;
}//end main
