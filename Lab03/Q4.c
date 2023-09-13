#include <stdio.h>

int main() {
    double a, b, c;

   
    printf("Enter the original price: $");
    scanf("%lf", &a);

    printf("what is the discount: ");
    scanf("%lf", &b);

   
    if (b >= 0 && b <= 100) {
        c = a - (a * b / 100);
        printf("Discounted price: $%.2lf\n", c);
    } else {
        printf("Error: Invalid discount percent. It must be between 0 and 100.\n");
    }

    return 0;
}//end main
